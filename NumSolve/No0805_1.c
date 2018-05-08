#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TRUE 1
#define FALSE 0 //フラグ処理など数字だとわかりづらい時に
#define STARTHP 30

int generateNum(int);
int checkNum(int);
void compNum(int, int, int[]);
int digit(int);
void opening(void);

int main(void)
{
  int ans, reply; //答えを格納する変数, プレイヤーの回答を格納する変数
  int play = TRUE; //ゲームを続ける処理をする変数
  int flg = FALSE; //汎用フラグ変数
  int result[2] = {0}; //hit, criticalの個数を格納する変数
  int check = FALSE; //フラグ変数
  int stage = 0; //現在のステージ
  int p_hp = STARTHP, e_hp, e_atk; //それぞれ戦闘で必要なパラメーター
  int score = 0; //戦闘スコア変数
  int mode; //プレイモード 余裕があれば、2:エンドレスモードとかつくってもいいかも。
  char cont;
  char enemyname[20] = {0}; //敵キャラの名前を格納する変数

  system("clear");

  printf("Num Solve\n\n1: Normal Mode(初めての方はコチラ)\n2: Endless Mode(説明無し)\n\n");
  flg = FALSE;
  while(flg == FALSE){
    printf("Select Mode => ");
    scanf("%d", &mode);
    if(mode == 1 || mode == 2){
      flg = TRUE;
    }
  }
  getchar();

  if(mode == 1){
    opening();
  }
  
  while(play == TRUE){
    srand((unsigned)time(NULL));
    flg = FALSE;
    stage++;
    while(flg == FALSE){
      ans = generateNum(stage);
      check = checkNum(ans);
      if(check == TRUE){
	flg = TRUE;
      }
    }

    system("clear");

    printf("stage %d\n", stage);
    switch(stage % 5){
    case 1:
      sprintf(enemyname, "スライム");//変数にprintする関数
      e_hp = 10 + stage / 5 * 10;
      e_atk = 1 + stage / 5 * 2;
      break;
    case 2:
      sprintf(enemyname, "レッドゼリー");
      e_hp = 20 + stage / 5 * 20;
      e_atk = 2 + stage / 5 * 2;
      break;
    case 3:
      sprintf(enemyname, "シャインプリン");
      e_hp = 30 + stage / 5 * 30;
      e_atk = 2 + stage / 5 * 4;
      break;
    case 4:
      sprintf(enemyname, "ブラックグミ");
      e_hp = 40 + stage / 5 * 40;
      e_atk = 2 + stage / 5 * 4;
      break;
    case 0:
      sprintf(enemyname, "ボスの草クラゲ");
      e_hp = 50 + stage / 5 * 50;
      e_atk = 3 + stage;
      break;
    }
    printf("%sが現れた！\n", enemyname);
		
    while(p_hp > 0 && e_hp > 0){
      flg = FALSE;
			
      printf("Now status\n");
      printf("player HP : %d\nenemy HP : %d\n", p_hp, e_hp);
      while(flg == FALSE){
	printf("%d桁の数字を入力して攻撃！(同じ数字は2回以上使えない！) => ", (int)log10(ans) + 1);
	scanf("%d", &reply);
	check = checkNum(reply);
	if(check == TRUE){
	  flg = TRUE;
	}
      }

      system("clear");
			
      compNum(ans, reply, result);
			
      printf("%dcritical!! %dhit!\n", result[0], result[1]);
      printf("Now score: %d\n", score);
			
      if(ans == reply){
	e_hp = 0;
	printf("All critical!! 一撃必殺！\n");
	score += p_hp;
	break;
      }else{
	e_hp -= result[0] * 2 + result[1];
	score += result[0] * 2 + result[1];
	p_hp -= e_atk;
      }
    }
    if(p_hp <= 0){
      printf("%sに負けてしまった…\nstage : %d\nscore : %d\n", enemyname, stage, score);
      exit(0);
    }
    printf("%sを倒した！\n", enemyname);
    p_hp += ((STARTHP + stage * 5) - p_hp) * 0.5;
    puts("test");
    printf("%d, %d\n", stage, mode);
    if(stage == 5 && mode == 1){
      printf("おめでとう！ここにいるモンスターをすべて倒し，弧乃村を救った！\nstage : all cleared\nscore %d\n", stage, score * 1.6);
    }

    printf("次のステージに進みますか？ (y/n) => ");
    do{
      scanf("%c", &cont);
      if(cont == 'y'){
	play = 1;
      }else{
	play = 0;
      }
    }while(cont != 'y' && cont != 'n');
    if(play == 0){
      printf("すべてのモンスターを倒しきらずに逃げ出した…\nstage : %d cleared\nscore : %d\n", stage, score * 1.3);
    }
  }
	
  printf("ゲームを終了します。\n");
  return 0;
}

int generateNum(int stage)
{
  int num;
  if(stage % 5 == 0){
    num = rand() % 999 + 1; //1 ~ 999
  }else{
    num = rand() % 99 + 1; //1 ~ 99
  }
	
  return num;
}

int checkNum(int num)
{
  int num1, num2;
  int flg = 0;
  num1 = num;
	
  while(num1 > 0){
    num2 = num;
    while(num2 > 0){
      if(num1 % 10 == num2 % 10){
	flg++;
      }
      num2 /= 10;
    }
    num1 /= 10;
  }
	
  if(flg > log10(num) + 1){
    return FALSE;
  }else{
    return TRUE;
  }
}

void compNum(int ans, int rep, int result[])
{
  //check critical
  result[0] = 0;
  result[1] = 0;
  int r_ans = ans;
  int r_rep = rep;
	
  while(r_ans > 0 || r_rep > 0){
    if(r_ans % 10 == r_rep % 10){
      result[0]++;
    }
    r_ans /= 10;
    r_rep /= 10;
  }
	
  //check hit
  r_rep = rep;
  while(r_rep > 0){
    r_ans = ans;
    while(r_ans > 0){
      if(r_ans % 10 == r_rep % 10){
	result[1]++;
      }
      r_ans /= 10;
    }
    r_rep /= 10;
  }
	
  result[1] -= result[0];
}

void opening(void)
{
  system("clear");
  
  printf("---Tutorial---\n\n");
  
  printf("201x年、10月y日 亜野県孤乃村にて...\n");
  printf("突然、孤乃村がむにむにした何かに支配されてしまった！\n");
  printf("むにむにを退治して孤乃村を救え！\n");

  printf("Press Enter key.\n");
  getchar();

  printf("0~9の数字を入力して攻撃しよう.\n");
  printf("指定されている桁数を入力して連続攻撃(している設定)だ！\n");
  printf("攻撃が終わると、その攻撃の結果がでるぞ！\n");

  printf("Press Enter key.\n");
  getchar();

  system("clear");
  printf("---攻撃について---\n\n");

  printf("一度攻撃(数字選択)をすると，critical回数とhit回数が出てきます．\n");
  printf("critical => 数字と桁が当っている場合に増加.\n");
  printf("hit => 数字は当っているが、桁が違う場合に増加.\n\n");
  printf("すべての数でcritical判定の(数字を完全に当てられた)場合，\n一撃必殺となり，相手が必ず倒れます(基本的にはこの方法).\n");
  
  printf("Press Enter key.\n");
  getchar();
  
  printf("ex.)正解 => 63 の場合...\n");
  printf("1. 32と入力 => [3]がhit         => 0critical!! 1hit!\n");
  printf("2. 53と入力 => [3]がcritical    => 1critical!! 0hit!\n");
  printf("3. 36と入力 => [3],[6]ともにhit  => 0critical!! 2hit!\n");
  printf("となります.\n\n");

  printf("同じ数字は2回以上使わないこと！\n");  

  printf("Press Enter key.\n");
  getchar();

  system("clear");
  printf("---ゲームクリアとゲームオーバー---\n\n");
  printf("攻撃と推理を繰り返していき，モンスターのHPを0にすれば，ステージクリア．\n");
  printf("自分のHPが0になったらゲームオーバーです．\n");

  printf("Press Enter key.\n");
  getchar();

}
