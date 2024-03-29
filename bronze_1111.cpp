#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double a;
	printf("»ï°¢ÇüÀÇ ¹Øº¯:");
	scanf("%lf", &a);
	double b;
	printf("»ï°¢ÇüÀÇ ³ôÀÌ:");
	scanf("%lf", &b);
	double sum;
	sum = a * b / 2;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ:%0.lf", sum);
	return 0;


}


