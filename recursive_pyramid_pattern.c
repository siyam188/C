void printPyramid(int n, int total) {
    if (n == 0)
        return; 

    printPyramid(n - 1, total);  

    for (int i = 0; i < total - n; i++)
        printf(" ");  

    for (int i = 0; i < 2 * n - 1; i++)
        printf("*");  

    printf("\n");
}
int main() {
    int N;
    scanf("%d", &N);
    printPyramid(N, N);
    return 0;
}
