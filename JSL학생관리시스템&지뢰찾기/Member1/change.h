#pragma once
#include"Member.h"

void change() {
	system("cls");
	int no;
	char name[20];
	char jean[50];
	char ja[50];
	char ban[50];
	int jum;
	int grade;
	int age;
	int no1; // 메뉴
	int num = 0;
	int num1 = 0;
	int o = 0;

	printf("\n");
	printf("정보수정\n");
	while (1) {

		num1 = 0;
		printf("--------------------------------------\n");
		printf("1.입력 2.메인메뉴 > ");
		scanf("%d", &o);
		printf("\n");
		
		if (o == 2) {
			return;
		}
		else if (o == 1)
			printf("회원번호를 입력해주세요 > ");
		scanf("%d", &no);
		for (int i = 0; i < index; i++) {
			if (stu[i].no == no) {
				num = i;
				num1 = 1;
			}
		}

		if (num1 == 1) {
			printf("---------------------------\n");
			printf("1. 이름\n");
			printf("2. 나이\n");
			printf("3. 반\n");
			printf("4. 전공\n");
			printf("5. 자격증\n");
			printf("6. 점수\n");
			printf("7. 종료\n");
			printf("\n");
			printf("입력 >");
			scanf("%d", &no1);
			printf("---------------------------\n");
			printf("\n");
			if (no1 == 1) {
				printf("이름수정\n");
				printf("\n");
				printf("%s => ", stu[num].name);
				scanf("%s", &name);
				strcpy(stu[num].name, name);
			}
			else if (no1 == 2) {
				printf("나이수정\n");
				printf("\n");
				printf("%d => ", stu[num].age);
				scanf("%2d", &age);
				stu[num].age = age;
			}
			else if (no1 == 3) {
				printf("반 수정\n");
				printf("\n");
				printf("%s => ", stu[num].ban);
				scanf("%s", &ban);
				strcpy(stu[num].ban, ban);
			}
			else if (no1 == 4) {
				printf("전공수정\n");
				printf("\n");
				printf("%s => ", stu[num].jean);
				scanf("%6s", &jean);
				strcpy(stu[num].jean, jean);
			}
			else if (no1 == 5) {
				printf("자격증 수정\n");
				printf("\n");
				printf("%s => ", stu[num].ja);
				gets(stdin);
				gets(ja);
				strcpy(stu[num].ja, ja);
			}
			else if (no1 == 6) {
				printf("점수 수정\n");
				printf("%d => ", stu[num].jum);
				scanf("%d", &jum);
				stu[num].jum = jum;
			}
			else if
				(no1 == 7) {
				printf("수정이 종료되었습니다.\n");
				printf("\n");
				return;
			}
			else {
				printf("입력이 올바르지 않습니다.\n");
				continue;
			}
			printf("정보수정이 완료되었습니다.\n");

		}
		else printf("회원번호가 올바르지 않습니다.\n"); continue;

	}

	Sleep(800);
}
