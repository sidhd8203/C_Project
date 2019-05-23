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
	printf("학생등록\n");
	printf("번호 > ");
	scanf("%d", &no);
	for (int i = 0; i < index; i++) {
		if (stu[i].no == no) {
			return -1; //  중복되면 리턴
		}
	}
	printf("이름 = ");
	scanf("%s", &name);
	printf("나이 = ");
	scanf("%d", &age);
	printf("전공 = ");
	scanf("%s", &jean);
	printf("자격증 = ");
	gets(stdin);
	gets(ja);
	
	printf("반 = ");
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
	printf("학생 등록이 완료되었습니다.\n");


	Sleep(800);
	

	return 0;
}
