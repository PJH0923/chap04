/* ���ϸ�: assignment02.c

   * ����: ȭ�� �µ��� �Է¹޾� ���� �µ��� ��ȯ�ϴ� ���α׷�

   * �ۼ���: ������

   * ��¥: 2025.04.17

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double f_c(double f); // ��ȯ �Լ�
int assignment2();    // ȣ�� �Լ� 

int main()
{
	assignment2();
	return 0;
}


int assignment2()
{
	double f = 0; // ȭ��
	double c = 0; // ����

	printf("ȭ�� �µ�? ");
	scanf("%lf", &f);

	c = f_c(f); // ��ȯ �Լ� ȣ��

	printf("%.2f F = %.2f C\n", f, c); // ���

	return 0;
}

/*
  �Լ� �̸� : f_c
  �ϴ� �� : ȭ���� ������ �ٲ�
*/
double f_c(double f)
{
	return (f - 32) * 5 / 9;
}
