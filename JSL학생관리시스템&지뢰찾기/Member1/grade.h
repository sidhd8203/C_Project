#pragma once
#include"Member.h"

void grade() {            //점수 갱신, 등수
   //응시, 미응시 모두 시험횟수에 포함
	system("cls");
	int no = 0;
	int jum = 0;
	int grade = 0;
	int count = 0;

	for (int i = 0; i < index; i++) {
		printf("-----------------------\n");
		printf("%3d번 %5s의 점수 : ", stu[i].no, stu[i].name);
		scanf("%d", &jum);
		printf("-----------------------\n");

		stu[i].jum = jum;
	}

	for (int i = 0; i < index; i++) {
		for (int j = 0; j < index; j++) {
			if (stu[i].jum < stu[j].jum) {
				++count;
			}
		}
		grade = count + 1;
		stu[i].grade = grade;

		count = 0;
	}
	Sleep(800);
}