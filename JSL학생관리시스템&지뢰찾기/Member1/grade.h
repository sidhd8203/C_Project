#pragma once
#include"Member.h"

void grade() {            //���� ����, ���
   //����, ������ ��� ����Ƚ���� ����
	system("cls");
	int no = 0;
	int jum = 0;
	int grade = 0;
	int count = 0;

	for (int i = 0; i < index; i++) {
		printf("-----------------------\n");
		printf("%3d�� %5s�� ���� : ", stu[i].no, stu[i].name);
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