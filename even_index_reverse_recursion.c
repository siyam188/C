#include <stdio.h>

void printEvenReverse(int A[], int i) {
    if (i < 0)
        return;
    printf("%d ", A[i]);
    printEvenReverse(A, i - 2);
}

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int lastEvenIndex;
    if (N % 2 == 0)
        lastEvenIndex = N - 2;
    else
        lastEvenIndex = N - 1;

    printEvenReverse(A, lastEvenIndex);
    return 0;
}
