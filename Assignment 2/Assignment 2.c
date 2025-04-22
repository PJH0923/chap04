/* 파일명: assignment02.c

   * 내용: 화씨 온도를 입력받아 섭씨 온도로 변환하는 프로그램

   * 작성자: 박종훈

   * 날짜: 2025.04.17

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double f_c(double f); // 변환 함수
int assignment2();    // 호출 함수 

int main()
{
	assignment2();
	return 0;
}


int assignment2()
{
	double f = 0; // 화씨
	double c = 0; // 섭씨

	printf("화씨 온도? ");
	scanf("%lf", &f);

	c = f_c(f); // 변환 함수 호출

	printf("%.2f F = %.2f C\n", f, c); // 결과

	return 0;
}

/*
  함수 이름 : f_c
  하는 거 : 화씨를 섭씨로 바꿈
*/
double f_c(double f)
{
	return (f - 32) * 5 / 9;
}
