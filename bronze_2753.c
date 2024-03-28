#include <stdio.h>
int main(void)
{
	int year, result;
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
	printf("%d", result);
	return 0;
}