/* 파일명: assignment08.c

   * 내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램

   * 작성자: 박종훈

   * 날짜: 2025.04.17

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double volume(double r); // 구의 부피 함ㅅ수
int assignment3();       // 메인에서 부르는 함수

int main()
{
	assignment3(); 
	return 0;
}

int assignment3()
{
	double r = 0; // 반지름
	double v = 0; // 부피

	printf("반지름의 길이?");
	scanf("%lf", &r); 

	v = volume(r); // 부피 구하는 함수 호출

	printf("구의 부피 : %.6f\n", v); 

	return 0;
}

/*
  함수 이름 : volume
  하는 일 : 구의 부피 계산해줌
*/
double volume(double r)
{
	double pi = 3.141592;
	double result = 0;

	result = (4 / 3) * pi * r * r * r;

	return result;
}
