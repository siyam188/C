#include<stdio.h>
void odd_even(int arr[],int n)
{
    int even =0,odd=0;
    for(int i =0;i<n;i++)
    {
    if(arr[i]%2==0)
        {
            even++;
        }
        if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    printf("%d %d",even,odd);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    odd_even(arr,n);
    return 0;
}
