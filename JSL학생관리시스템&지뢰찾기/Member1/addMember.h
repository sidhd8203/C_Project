#pragma once
#include"Member.h"
#include<Windows.h>
int addMember() {
	system("cls");
	int no;
	char name[20];
	char jean[50];
	char ja[50];
	char ban[50];
	int age;

	printf("\n");
	printf("\n");
	printf("------------------------------\n");
	printf("�л����\n");
	printf("��ȣ > ");
	scanf("%d", &no);
	for (int i = 0; i < index; i++) {
		if (stu[i].no == no) {
			return -1; //  �ߺ��Ǹ� ����
		}
	}
	printf("�̸� = ");
	scanf("%s", &name);
	printf("���� = ");
	scanf("%d", &age);
	printf("���� = ");
	scanf("%s", &jean);
	printf("�ڰ��� = ");
	gets(stdin);
	gets(ja);
	
	printf("�� = ");
	scanf("%s", &ban);


	stu[index].no = no;
	strcpy(stu[index].name, name);
	stu[index].age = age;
	strcpy(stu[index].ja, ja);
	strcpy(stu[index].jean, jean);
	strcpy(stu[index].ban, ban);
	stu[index].jum = 0;
	stu[index].grade = 0;

	index++;
	printf("\n");
	printf("�л� ����� �Ϸ�Ǿ����ϴ�.\n");


	Sleep(800);
	

	return 0;
}
