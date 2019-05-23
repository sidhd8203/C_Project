#pragma once
#include"Member.h"

void deleteMember() {
	system("cls");
	int no;
	int num = 0;

	printf("학생 삭제\n");
	printf("------------------\n");
	printf("학생번호 = ");
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
	
	printf("삭제가 완료되었습니다.\n");
	Sleep(800);
}