#pragma once
#include"Member.h"

void deleteMember() {
	system("cls");
	int no;
	int num = 0;

	printf("�л� ����\n");
	printf("------------------\n");
	printf("�л���ȣ = ");
	scanf("%d", &no);

	for (int i = 0; i < index; i++) {
		if (stu[i].no == no) {
			num = i;
		}
	}

	if (num == (index - 1)) {
		--index;
	}
	else if (num < (index - 1)) {
		for (int i = num + 1; i < index; i++) {
			 stu[i - 1] = stu[i];
		}
		--index;
	}
	
	printf("������ �Ϸ�Ǿ����ϴ�.\n");
	Sleep(800);
}