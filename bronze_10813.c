#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N, M, b, i, j, change;
	scanf("%d%d", &N, &M);
	int* a = (int*)malloc(N * sizeof(int));

	for (b = 1; b <= N; b++) {
		a[b-1] = b;
	}

	for (b = 0; b < M; b++) {
		scanf("%d%d", &i, &j);
		change = a[i - 1];
		a[i - 1] = a[j - 1];
		a[j - 1] = change;
	}
	for (b = 0; b < N; b++) {
		printf("%d ", a[b]);
	}

}