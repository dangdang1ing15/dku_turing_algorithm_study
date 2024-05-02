#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int main() {
	int N, M, b, c, i, j, k;
	scanf("%d %d", &N, &M);
	int* a = (int*)malloc(N * sizeof(int));

	for (b = 0; b < N; b++) {
		a[b] = 0;
	}

	for (b = 0; b < M; b++) {
		scanf("%d %d %d", &i, &j, &k);
		for (c=0;c<j-i+1;c++) {
			a[i+c-1] = k;
		}
	}

	for (b = 0; b < N; b++) {
		printf("%d ", a[b]);
	}
}