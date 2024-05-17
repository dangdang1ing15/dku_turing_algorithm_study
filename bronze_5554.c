#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sec1, sec2, sec3, sec4, all, min, sec;
	
	scanf("%d", &sec1);
	scanf("%d", &sec2);
	scanf("%d", &sec3);
	scanf("%d", &sec4);

	all = sec1 + sec2 + sec3 + sec4;
	min = all / 60;
	sec = all % 60;

	printf("%d\n", min);
	printf("%d\n", sec);

	return 0;
}