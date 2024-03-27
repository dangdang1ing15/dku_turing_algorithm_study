#include <stdio.h>
#pragma warning(disable : 4996)
int main() {
	int a[9], i;
	for (i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0], number = 1;
	for (i = 1; i < 9; i++) {
		if (a[i] > max) {
			max = a[i];
			number = i + 1;
		}
	}
	printf("%d\n%d", max, number);
}