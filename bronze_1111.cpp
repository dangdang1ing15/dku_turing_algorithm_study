#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double a;
	printf("�ﰢ���� �غ�:");
	scanf("%lf", &a);
	double b;
	printf("�ﰢ���� ����:");
	scanf("%lf", &b);
	double sum;
	sum = a * b / 2;
	printf("�ﰢ���� ����:%0.lf", sum);
	return 0;


}


