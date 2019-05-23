#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

#define JI 10			//지뢰판 크기  // 地雷板の大きさ

int cnt[JI][JI] = { 0 };	//선택한 번호의 주변에 있는 지뢰의 갯수를 담는 전역배열  //選択した番号の周辺にある地雷の個数を入れる全域配列

void reset(int a[JI][JI]);
void creatJI(int a[JI][JI]);
void gamming(int map[JI][JI], int hide[JI][JI]);
void draw(int a[JI][JI]);

int main() {
	int map[JI][JI];				//지뢰가 있는 위치가 담긴 배열  //地雷が込められた配列
	int hide[JI][JI];				//사용자에게 보여주기 위한 배열 //ユーザーに見せるための配列

	srand((unsigned)time(NULL));	//양수만 받고 텀을두고 난수발생 //正数だけをもらってディレーを置いて乱数発生

	reset(map);
	reset(hide);

	creatJI(map);

	gamming(map, hide);

	return 0;
}

void reset(int a[JI][JI]) {
	for (int i = 0; i < JI; i++)
	{
		for (int j = 0; j < JI; j++)
		{
			a[i][j] = 0;
		}
	}								// 0で初期化する
}

void creatJI(int a[JI][JI]) {
	int x = 0, y = 0;
	int k = 0;

	srand((unsigned)time(NULL));

	printf("생성할 지뢰개수를 입력해주세요(10x10)\n");
	scanf_s("%d", &k);						//지뢰갯수 입력받음  //地雷の入力 

	for (int i = 0; i < k; i++) {			//지뢰갯수 만큼 for문을 돌림  //地雷の個数だけ"for文"を回す

		while (1) {
			x = rand() % JI; // 1~ji		//x좌표를 난수로 입력받음  //x座標を乱数で入力される
			y = rand() % JI; // 1~ji		//y좌표를 난수로 입력받음  //y座標を乱数で入力される

			if (a[y][x] == 1) {				//이미 지뢰가 들어있을 때는 그냥 break.  //既に地雷が入っているときはただbreak
				--i;						//중복된 번호가 선택됐을때 i값을 하나 줄임  //重複番号が選択されたとき i値を一つ減らす
				break;
			}
			else {							//지뢰를 넣을때 값을 1로 바꿈  //地雷を入れると値段を1に変える
				a[y][x] = 1;
				break;
			}
		}

	}
	Sleep(1000);
	system("cls");								//화면 깨끗이  //画面綺麗に
}

void gamming(int map[JI][JI], int hide[JI][JI]) {
	int menu = 0;
	int d = 0, c = 0;
	int count = 0;

	while (1)							//게임을 진행하는 while문  //ゲームを進めるwhile文
	{
		draw(hide);						// 지뢰판을 그린다.  //地雷板を作る

		printf("1.확인 2.깃발\n>");
		scanf("%d", &menu);				//확인할지 깃발을 꽂을지 선택한다.  //確認するか,それとも旗を差し込むかを選択する。

		if (menu == 1) {				//확인일때 //確認の日時

			printf("x좌표입력 : ");
			scanf("%d", &d);
			printf("y좌표입력 : ");
			scanf("%d", &c);			//좌표값을 입력받는다.  //座標値を入力してもらう。

			c--;
			d--;						//배열인덱스에 맞춰 1씩 줄인다.  //配列インデックスに合わせて1ずつ減らす。

			if (c >= JI || d >= JI || c < 0 || d < 0) {  // c가 0보다작거나 ji보다크면 다시 입력 받는다.  //cが0より小さかったりjiより大きければ、再入力する必要がある。
				printf("범위안의 숫자를 입력해주세요\n");
				Sleep(1000);							//딜레이 //ディレー
			}
			else if (map[c][d] == 1)					//지뢰일때 //地雷の時
			{
				hide[c][d] = 1;
				system("cls");
				draw(hide);
				printf("지뢰\n");
				Sleep(2000);
				break;
			}
			else if (hide[c][d] == 2) {					//이미 입력한 좌표일때 //既に入力した座標のとき
				printf("이미 입력했습니다.\n");
			}
			else if (map[c][d] == 0) {					//지뢰가 아닐때 //地雷でないとき
				for (int i = 0; i < 3; i++) {			//주변에 있는 지뢰의 갯수를 저장하는 for문  //周辺にある地雷の個数を保存するfor文
					for (int j = 0; j < 3; j++) {
						if (map[(c - 1) + i][(d - 1) + j] == 1) {
							++count;
						}
					}
				}
				cnt[c][d] = count;						//전역변수cnt에 count값을 넣는다(지뢰갯수) //除隊変数cntにcount値を入れる(地雷個数)
				count = 0;								//count값을 0으로 초기화한다. //count値を0に、初期化する。
				 
				printf("확인\n");
				hide[c][d] = 2;							//hide값은 눌린 상태인 2로 바꾼다. //hide値は押された状態の2に変える。
			}

			Sleep(1000);
			system("cls");								//화면 깨끗이
		}
		else if (menu == 2) {							//깃발 꽂을 때 //旗差し
			printf("x좌표입력 : ");
			scanf("%d", &d);
			printf("y좌표입력 : ");
			scanf("%d", &c);

			c--;
			d--;										//좌표입력받음 //座標を入力される

			if (c >= JI || d >= JI || c < 0 || d < 0) {  // c가 0보다작거나 30보다크면 다시 // cが0より小さかったりJIより大きければ、再び
				printf("범위안의 숫자를 입력해주세요\n");
				Sleep(1000);
			}
			else if (hide[c][d] == 2) {
				printf("이미 입력했습니다.\n");
			}
			else if (map[c][d] == 0 || map[c][d] == 1) {
				printf("확인\n");
				hide[c][d] = 3;							//hide값을 3을로 바꿔 ?가 출력되도록한다. //hide値を3乙と変えて?が出力されるようにする。
			}

			Sleep(1000);
			system("cls");
		}
	}

	printf("지뢰위치\n");

	draw(map);							//게임이 끝났을때 모든 지뢰의 위치를 출력시켜준다. //ゲームが終わったとき、すべての地雷の位置を出力させてくれる。
}

void draw(int a[JI][JI])				//지뢰판을 출력시켜주는 함수,hide배열을 받는다. //地雷版を出力させる関数,hideの配列を受ける。
{
	printf("  ");
	for (int i = 0; i < JI; i++) {
		if ((i + 1) % 5 == 0) {
			printf("%2d", i + 1);
		}
		else {
			printf("--");
		}
	}
	printf("  X좌표\n");
	for (int i = 0; i < JI; i++)
	{
		if ((i + 1) % 5 == 0) {
			printf("%2d", i + 1);
		}
		else {
			printf(" |");
		}

		for (int j = 0; j < JI; j++)
		{
			if (a[i][j] == 0) {				//아무것도 눌린 상태가 아닐때 //何も押された状態でない時
				printf("■");
			}
			else if (a[i][j] == 1) {		//눌렀더니 지뢰일때 //押したら地雷の時
				printf("⊙");
			}
			else if (a[i][j] == 2) {		//눌렀을때 //押した時

				if (cnt[i][j] == 0) {		//주변에 지뢰가 없을때 //まわりに地雷がないとき
					printf("□");
				}

				else {						//주변에 지뢰가 있을때 그 갯수 출력 //●周辺に地雷がある時,その海水の出力
					printf("%2d", cnt[i][j]);
				}
			}
			else if (a[i][j] == 3)			//깃발을 꽂는다. //旗をさす.
				printf(" ?");
		}
		printf("\n");
	}
	printf("Y좌표\n");
}