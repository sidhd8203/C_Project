#pragma once
#include<stdio.h>
#include<string.h>
#include"Member.h"

void showAll() {
	system("cls");
	printf("전체회원출력\n");
	printf("---------------------------\n");
	for (int i = 0; i < index; i++) {
		printf("번호 = %d\n",stu[i].no);
		printf("이름 = %s\n",stu[i].name);
		printf("나이 = %d\n",stu[i].age);
		printf("전공 = %s\n",stu[i].jean);
		printf("반 = %s\n",stu[i].ban);
		printf("자격증 = %s\n",stu[i].ja);
		printf("시험점수 = %d\n",stu[i].jum);
		printf("순위 = %d\n",stu[i].grade);
	printf("-------------------------\n");
	}
	Sleep(3000);
	}

