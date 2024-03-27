#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
int main() {
    int N, X, i;
    scanf("%d %d", &N, &X);
    int* A = (int*)malloc(N * sizeof(int));
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if (A[i] < X)printf("%d ", A[i]);
    }
    free(A);
    return 0;


}