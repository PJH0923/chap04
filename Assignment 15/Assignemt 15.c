/* ���ϸ�: assignment15.c

   * ����: �����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷�  

   * �ۼ���: ������

   * ��¥: 2025.04.19

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
	int basic; // ���� ȯ��
	float pre; // �����
	float usd; // �� �޷�
	double fee; // ȯ�� ������
	double rate; // ���� ȯ��
	float krw; // ���� ��ȭ
	double Exc_Fee = 1.75; // �������� ������ ����

	// ���� ȯ��
	printf("��/�޷� �Ÿű�����? ");
	scanf("%d", &basic);

	// �����
	printf("ȯ�������(0~100%%)? ");
	scanf("%f", &pre);

	// ȯ�� ������ ���
	fee = basic * (Exc_Fee * (1.0 - (pre / 100))) / 100.0;

	// ���� ȯ�� ���
	rate = basic + fee;

	printf("�޷� �� �� ȯ���� %f�Դϴ�.\n", rate);

	// �� �޷� �Է�
	printf("������ �޷�(USD)? ");
	scanf("%f", &usd);

	// �ʿ��� ��ȭ ���
	krw = usd * rate;

	// ���
	printf("USD %.2f �춧 ==> KRW %.2f\n", usd, krw);

	return 0;
}
