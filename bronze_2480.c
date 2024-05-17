#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int one, two, three, money;
	scanf("%d %d %d", &one, &two, &three);

	if (one == two && two == three)
		money = 10000 + 1000 * one;
	else if (one == two && two != three && three != one)
		money = 1000 + one * 100;
	else if (one != two && two == three && three != one)
		money = 1000 + 100 * two;
	else if (one != two && two != three && three == one)
		money = 1000 + 100 * three;
	else
	{
		int biggest;
		if (one > two)
			biggest = one;
		else
			biggest = two;
		if (biggest < three)
			biggest = three;
		money = biggest * 100;
	}
	printf("%d", money);
	return 0;
}