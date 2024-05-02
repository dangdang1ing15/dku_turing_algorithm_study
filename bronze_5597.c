#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int stu[31] = { 0 }, num;
	for (int i = 0;i < 28;i++) {
		scanf("%d", &num);
		stu[num] = num;
	}
	for (int i = 1; i <= 30; i++) {
		if (stu[i] == 0)printf("%d\n", i);
	}
	return 0;
}