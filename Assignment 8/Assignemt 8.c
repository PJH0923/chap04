/* ���ϸ�: assignment08.c

   * ����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷�

   * �ۼ���: ������

   * ��¥: 2025.04.17

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double volume(double r); // ���� ���� �Ԥ���
int assignment3();       // ���ο��� �θ��� �Լ�

int main()
{
	assignment3(); 
	return 0;
}

int assignment3()
{
	double r = 0; // ������
	double v = 0; // ����

	printf("�������� ����?");
	scanf("%lf", &r); 

	v = volume(r); // ���� ���ϴ� �Լ� ȣ��

	printf("���� ���� : %.6f\n", v); 

	return 0;
}

/*
  �Լ� �̸� : volume
  �ϴ� �� : ���� ���� �������
*/
double volume(double r)
{
	double pi = 3.141592;
	double result = 0;

	result = (4 / 3) * pi * r * r * r;

	return result;
}
