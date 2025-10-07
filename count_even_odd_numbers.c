#include <stdio.h>

int main()
{
    int i, n, num;
    int evenCount = 0, oddCount = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num % 2 == 0)
        {
            evenCount++;
            printf("%d is even\n", num);
        }
        else
        {
            oddCount++;
            printf("%d is odd\n", num);
        }
    }

    printf("\nTotal even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);

    return 0;
}
