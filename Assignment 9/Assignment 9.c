/* 파일명: assignment09.c

   * 내용: 영상 재생시간을 초 단위로 입력받아 몇시 몇분 몇초인지 출력하는 프로그램

   * 작성자: 박종훈

   * 날짜: 2025.04.19

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment9(); 

int main()
{
	assignment9(); 
	return 0;
}

int assignment9()
{
	int total; // 입력받은 시간
	int h; // 시간
	int m; // 분
	int s; // 초

	printf("재생시간(초)?");
	scanf("%d", &total);

	h = total / 3600; // 시간 계산
	m = (total % 3600) / 60; // 분 계산
	s = total % 60; // 초 계산

	printf("재생시간은 %d시 %d분 %d초 입니다.\n", h, m, s);

	return 0;
}
