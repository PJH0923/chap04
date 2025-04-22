/* 파일명: assignment15.c

   * 내용: 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램  

   * 작성자: 박종훈

   * 날짜: 2025.04.19

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment15(); 

int main()
{
	assignment15(); 
	return 0;
}

int assignment15()
{
	int basic; // 기준 환율
	float pre; // 우대율
	float usd; // 살 달러
	double fee; // 환율 수수료
	double rate; // 실제 환율
	float krw; // 최종 원화
	double Exc_Fee = 1.75; // 수수료율 변수로 선언

	// 기준 환율
	printf("원/달러 매매기준율? ");
	scanf("%d", &basic);

	// 우대율
	printf("환율우대율(0~100%%)? ");
	scanf("%f", &pre);

	// 환율 수수료 계산
	fee = basic * (Exc_Fee * (1.0 - (pre / 100))) / 100.0;

	// 최종 환율 계산
	rate = basic + fee;

	printf("달러 살 때 환율은 %f입니다.\n", rate);

	// 살 달러 입력
	printf("구입할 달러(USD)? ");
	scanf("%f", &usd);

	// 필요한 원화 계산
	krw = usd * rate;

	// 출력
	printf("USD %.2f 살때 ==> KRW %.2f\n", usd, krw);

	return 0;
}
