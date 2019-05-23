#pragma once
#include<stdio.h>
#include<string.h>
#include<Windows.h>

typedef struct{

	int no; // 学生番号
	char name[20]; // 名前
	char jean[50]; // 大学専攻
	char ja[50]; // 資格証
	char ban[50]; // 日本語上、中、下　クラス
	int jum; // 点数
	int grade; //  点数
	int age; // 歳
}student;

student stu[100];
int index = 0;
