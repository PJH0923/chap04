/* ���ϸ�: assignment09.c

   * ����: ���� ����ð��� �� ������ �Է¹޾� ��� ��� �������� ����ϴ� ���α׷�

   * �ۼ���: ������

   * ��¥: 2025.04.19

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
	int total; // �Է¹��� �ð�
	int h; // �ð�
	int m; // ��
	int s; // ��

	printf("����ð�(��)?");
	scanf("%d", &total);

	h = total / 3600; // �ð� ���
	m = (total % 3600) / 60; // �� ���
	s = total % 60; // �� ���

	printf("����ð��� %d�� %d�� %d�� �Դϴ�.\n", h, m, s);

	return 0;
}
