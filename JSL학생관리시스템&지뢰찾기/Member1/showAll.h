#pragma once
#include<stdio.h>
#include<string.h>
#include"Member.h"

void showAll() {
	system("cls");
	printf("��üȸ�����\n");
	printf("---------------------------\n");
	for (int i = 0; i < index; i++) {
		printf("��ȣ = %d\n",stu[i].no);
		printf("�̸� = %s\n",stu[i].name);
		printf("���� = %d\n",stu[i].age);
		printf("���� = %s\n",stu[i].jean);
		printf("�� = %s\n",stu[i].ban);
		printf("�ڰ��� = %s\n",stu[i].ja);
		printf("�������� = %d\n",stu[i].jum);
		printf("���� = %d\n",stu[i].grade);
	printf("-------------------------\n");
	}
	Sleep(3000);
	}

