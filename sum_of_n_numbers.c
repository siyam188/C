#include <stdio.h>

int main()
{
    int i, n, num, sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum = sum + num;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
