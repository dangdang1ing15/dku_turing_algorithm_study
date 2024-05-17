#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int month, date;
	scanf("%d", &month);
	scanf("%d", &date);

	if (month < 2)
		printf("Before");
	else if (month > 2)
		printf("After");
	else if (month == 2)
	{
		if (date < 18)
			printf("Before");
		else if (date > 18)
			printf("After");
		else if (date == 18)
			printf("Special");
	}
	return 0;
}