/* ���ϸ�: assignment02.c

   * ����: �������� ���̸� �Է¹޾� ������� ���Ǹ� ���ϴ����α׷�

   * �ۼ���: ������

   * ��¥: 2025.04.17

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
	int r, h; // �������� ����
	double volume; // ����
	double pi = 3.141592; // ���� ��


	printf("�������� ����? ");
	scanf("%d", &r);

	
	printf("���� ? ");
	scanf("%d", &h);


	volume = pi * r * r * h;


	printf("������� ���� %.6f\n", volume);

	return 0;
}
