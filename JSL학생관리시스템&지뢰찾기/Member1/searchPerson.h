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
		printf("�˻��Ͻ� �׸��� �������ּ���\n");
		printf("-----------------------------------\n");
		printf("1. �̸����� �˻�\n");
		printf("2. ������ �˻�\n");
		printf("3. �������� �˻�\n");
		printf("4. �޴��� ���ư���\n");
		printf("�Է� > ");
		scanf("%d", &menu2);
		switch (menu2) {
		case 1:
			printf("�̸� = ");
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
				printf("�Է��Ͻ� %s �������� �����Դϴ�.\n", stu2);
				printf("\n");
				printf("��ȣ = %d\n", stu[i].no);
				printf("�̸� = %s\n", stu[i].name);
				printf("���� = %s\n", stu[i].jean);
				printf("�ڰ��� = %s\n", stu[i].ja);
				printf("�� = %s\n", stu[i].ban);
				printf("���� = %d\n", stu[i].jum);
				printf("��� = %d\n", stu[i].grade);
				printf("\n");
				break;

			}
			else if (op == 0) {
				printf("---------------------------\n");
				printf("�������� �ʴ� �̸��Դϴ�.\n");
				break;
			}




		case 2:
			printf("�� = ");
			scanf("%s", &stu2);
			printf("\n");

			for (int i = 0; i < index; i++) {
				if (strcmp(stu[i].ban, stu2) == 0) {
					num = i;
					op = 1;
					int i = num;
					printf("�Է��Ͻ� %s�� ��ü �л��� �����Դϴ�.\n", stu2);
					printf("\n");
					printf("��ȣ = %d\n", stu[i].no);
					printf("�̸� = %s\n", stu[i].name);
					printf("���� = %s\n", stu[i].jean);
					printf("�ڰ��� = %s\n", stu[i].ja);
					printf("�� = %s\n", stu[i].ban);
					printf("���� = %d\n", stu[i].jum);
					printf("��� = %d\n", stu[i].grade);
					printf("\n");
				}
			}
			if (op == 1) {

				break;

			}
			else if (op == 0) {
				printf("---------------------------\n");
				printf("�������� �ʴ� ���Դϴ�.\n");
				break;
			}

		case 3:
			printf("���� = ");
			scanf("%s", &stu2);
			printf("\n");

			for (int i = 0; i < index; i++) {
				if (strcmp(stu[i].jean, stu2) == 0) {
					num = i;
					op = 1;
					int i = num;
					printf("�Է��Ͻ� ���� %s�� ��ü �л� �����Դϴ�.\n", stu2);
					printf("\n");
					printf("��ȣ = %d\n", stu[i].no);
					printf("�̸� = %s\n", stu[i].name);
					printf("���� = %s\n", stu[i].jean);
					printf("�ڰ��� = %s\n", stu[i].ja);
					printf("�� = %s\n", stu[i].ban);
					printf("���� = %d\n", stu[i].jum);
					printf("��� = %d\n", stu[i].grade);
					printf("\n");
				}
			}
			if (op == 1) {

				break;

			}
			else if (op == 0) {
				printf("--------------------------------\n");
				printf("�������� �ʴ� �����Դϴ�.\n");
				break;
			}
		case 4:
			return;
		default:
			printf("�޴��� �߸��Ǿ����ϴ�.");
			break;
		}
		op = 0;
	}
	Sleep(800);
}