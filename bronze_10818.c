#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
int main() {
    int N, i;
    int max, min;
    scanf("%d", &N);
    int* A = (int*)malloc(N * sizeof(int));

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    max = A[0], min = A[0];
    for (i = 0; i < N - 1; i++) {
        if (A[i + 1] > max )max = A[i + 1];
        else if (A[i + 1] < min )min = A[i + 1];
    }

    printf("%d %d", min, max);
    free(A);
    return 0;

}