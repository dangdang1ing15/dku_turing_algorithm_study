#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int birthyear, birthmonth, birthdate;
	int year, month, date;
	int koreanbirth, countbirth, yearbirth;

	scanf("%d %d %d", &birthyear, &birthmonth, &birthdate);
	scanf("%d %d %d", &year, &month, &date);

	if (month > birthmonth || (month == birthmonth && date >= birthdate))
	{
		koreanbirth = year - birthyear;
		countbirth = year - birthyear + 1;
		yearbirth = year - birthyear;
	}
	else if (month < birthmonth || (month == birthmonth && date < birthdate))
	{
		koreanbirth = year - birthyear - 1;
		countbirth = year - birthyear + 1;
		yearbirth = year - birthyear;
	}
	printf("%d\n", koreanbirth);
	printf("%d\n", countbirth);
	printf("%d\n", yearbirth);
	return 0;
}