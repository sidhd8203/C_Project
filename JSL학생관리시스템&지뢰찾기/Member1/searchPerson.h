#pragma once
#include"Member.h"
#include<Windows.h>


void searchPerson() {
	system("cls");
	student stu2[100];
	int menu2 = 0;
	int op = 0;
	int num = 0;
	while (1) {
		printf("검색하실 항목을 선택해주세요\n");
		printf("-----------------------------------\n");
		printf("1. 이름으로 검색\n");
		printf("2. 반으로 검색\n");
		printf("3. 전공으로 검색\n");
		printf("4. 메뉴로 돌아가기\n");
		printf("입력 > ");
		scanf("%d", &menu2);
		switch (menu2) {
		case 1:
			printf("이름 = ");
			scanf("%s", &stu2);
			printf("\n");

			for (int i = 0; i < index; i++) {
				if (strcmp(stu[i].name, stu2) == 0) {
					num = i;
					op = 1;
					break;
				}
			}
			if (op == 1) {
				int i = num;
				printf("입력하신 %s 연수생의 정보입니다.\n", stu2);
				printf("\n");
				printf("번호 = %d\n", stu[i].no);
				printf("이름 = %s\n", stu[i].name);
				printf("전공 = %s\n", stu[i].jean);
				printf("자격증 = %s\n", stu[i].ja);
				printf("반 = %s\n", stu[i].ban);
				printf("점수 = %d\n", stu[i].jum);
				printf("등수 = %d\n", stu[i].grade);
				printf("\n");
				break;

			}
			else if (op == 0) {
				printf("---------------------------\n");
				printf("존재하지 않는 이름입니다.\n");
				break;
			}




		case 2:
			printf("반 = ");
			scanf("%s", &stu2);
			printf("\n");

			for (int i = 0; i < index; i++) {
				if (strcmp(stu[i].ban, stu2) == 0) {
					num = i;
					op = 1;
					int i = num;
					printf("입력하신 %s반 전체 학생의 정보입니다.\n", stu2);
					printf("\n");
					printf("번호 = %d\n", stu[i].no);
					printf("이름 = %s\n", stu[i].name);
					printf("전공 = %s\n", stu[i].jean);
					printf("자격증 = %s\n", stu[i].ja);
					printf("반 = %s\n", stu[i].ban);
					printf("점수 = %d\n", stu[i].jum);
					printf("등수 = %d\n", stu[i].grade);
					printf("\n");
				}
			}
			if (op == 1) {

				break;

			}
			else if (op == 0) {
				printf("---------------------------\n");
				printf("존재하지 않는 반입니다.\n");
				break;
			}

		case 3:
			printf("전공 = ");
			scanf("%s", &stu2);
			printf("\n");

			for (int i = 0; i < index; i++) {
				if (strcmp(stu[i].jean, stu2) == 0) {
					num = i;
					op = 1;
					int i = num;
					printf("입력하신 전공 %s의 전체 학생 정보입니다.\n", stu2);
					printf("\n");
					printf("번호 = %d\n", stu[i].no);
					printf("이름 = %s\n", stu[i].name);
					printf("전공 = %s\n", stu[i].jean);
					printf("자격증 = %s\n", stu[i].ja);
					printf("반 = %s\n", stu[i].ban);
					printf("점수 = %d\n", stu[i].jum);
					printf("등수 = %d\n", stu[i].grade);
					printf("\n");
				}
			}
			if (op == 1) {

				break;

			}
			else if (op == 0) {
				printf("--------------------------------\n");
				printf("존재하지 않는 전공입니다.\n");
				break;
			}
		case 4:
			return;
		default:
			printf("메뉴가 잘못되었습니다.");
			break;
		}
		op = 0;
	}
	Sleep(800);
}