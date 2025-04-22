/* 파일명: assignment02.c

   * 내용: 반지름과 높이를 입력받아 원기둥의 부피를 구하는프로그램

   * 작성자: 박종훈

   * 날짜: 2025.04.17

   */

#include <stdio.h>

int Assignment5();

int main()
{
	Assignment5(); 
	return 0;
}

int Assignment5()
{
	int r, h; // 반지름과 높이
	double volume; // 부피
	double pi = 3.141592; // 파이 값


	printf("반지름의 길이? ");
	scanf("%d", &r);

	
	printf("높이 ? ");
	scanf("%d", &h);


	volume = pi * r * r * h;


	printf("원기둥의 부피 %.6f\n", volume);

	return 0;
}
