/* 파일명: assignment17.c

   * 내용: 31번째 비트만 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램

   * 작성자: 박종훈

   * 날짜: 2025.04.19

   */

#include <stdio.h>

int Assignment17();

int main()
{
	Assignment17();
	return 0;
}

/*
  함수 이름 : Assignment17
  하는 일 : 7번, 15번, 23번, 31번 비트만 1인 값을 구하고 출력
*/
int Assignment17()
{
	unsigned int x = 1;

	// 7번 비트만 1인 값 구하기
	x = x << 7; 
	printf("7번 비트만 1인 값: %08x %d\n", x, x);

	// 15번 비트만 1인 값 구하기
	x = x << 8; 
	printf("15번 비트만 1인 값: %08x %d\n", x, x);

	// 23번 비트만 1인 값 구하기
	x = x << 8; 
	printf("23번 비트만 1인 값: %08x %d\n", x, x);

	// 31번 비트만 1인 값 구하기
	x = x << 8;
	printf("31번 비트만 1인 값: %08x %d", x, x);

	return 0;
}
