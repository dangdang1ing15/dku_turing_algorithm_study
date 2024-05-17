#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ang1, ang2, ang3;

	scanf("%d", &ang1);
	scanf("%d", &ang2);
	scanf("%d", &ang3);

	if (ang1 + ang2 + ang3 != 180)
		printf("Error");
	else {
		if (ang1 == ang2 && ang2 == ang3)
			printf("Equilateral");
		else if (ang1 == ang2 || ang2 == ang3 || ang1 == ang3)
			printf("Isosceles");
		else if (ang1 != ang2 && ang2 != ang3)
			printf("Scalene");
	}
	return 0;
}