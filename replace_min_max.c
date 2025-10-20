#include <stdio.h>

int main()
{
    int n, tmp;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    int min = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[min])
        {
            min = i;
        }
        if(arr[i] > arr[max])
        {
            max = i;
        }
    }

    
    tmp = arr[min];
    arr[min] = arr[max];
    arr[max] = tmp;

    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
