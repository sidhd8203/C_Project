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
	int no1; // �޴�
	int num = 0;
	int num1 = 0;
	int o = 0;

	printf("\n");
	printf("��������\n");
	while (1) {

		num1 = 0;
		printf("--------------------------------------\n");
		printf("1.�Է� 2.���θ޴� > ");
		scanf("%d", &o);
		printf("\n");
		
		if (o == 2) {
			return;
		}
		else if (o == 1)
			printf("ȸ����ȣ�� �Է����ּ��� > ");
		scanf("%d", &no);
		for (int i = 0; i < index; i++) {
			if (stu[i].no == no) {
				num = i;
				num1 = 1;
			}
		}

		if (num1 == 1) {
			printf("---------------------------\n");
			printf("1. �̸�\n");
			printf("2. ����\n");
			printf("3. ��\n");
			printf("4. ����\n");
			printf("5. �ڰ���\n");
			printf("6. ����\n");
			printf("7. ����\n");
			printf("\n");
			printf("�Է� >");
			scanf("%d", &no1);
			printf("---------------------------\n");
			printf("\n");
			if (no1 == 1) {
				printf("�̸�����\n");
				printf("\n");
				printf("%s => ", stu[num].name);
				scanf("%s", &name);
				strcpy(stu[num].name, name);
			}
			else if (no1 == 2) {
				printf("���̼���\n");
				printf("\n");
				printf("%d => ", stu[num].age);
				scanf("%2d", &age);
				stu[num].age = age;
			}
			else if (no1 == 3) {
				printf("�� ����\n");
				printf("\n");
				printf("%s => ", stu[num].ban);
				scanf("%s", &ban);
				strcpy(stu[num].ban, ban);
			}
			else if (no1 == 4) {
				printf("��������\n");
				printf("\n");
				printf("%s => ", stu[num].jean);
				scanf("%6s", &jean);
				strcpy(stu[num].jean, jean);
			}
			else if (no1 == 5) {
				printf("�ڰ��� ����\n");
				printf("\n");
				printf("%s => ", stu[num].ja);
				gets(stdin);
				gets(ja);
				strcpy(stu[num].ja, ja);
			}
			else if (no1 == 6) {
				printf("���� ����\n");
				printf("%d => ", stu[num].jum);
				scanf("%d", &jum);
				stu[num].jum = jum;
			}
			else if
				(no1 == 7) {
				printf("������ ����Ǿ����ϴ�.\n");
				printf("\n");
				return;
			}
			else {
				printf("�Է��� �ùٸ��� �ʽ��ϴ�.\n");
				continue;
			}
			printf("���������� �Ϸ�Ǿ����ϴ�.\n");

		}
		else printf("ȸ����ȣ�� �ùٸ��� �ʽ��ϴ�.\n"); continue;

	}

	Sleep(800);
}
