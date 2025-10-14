#include<stdio.h>
int main()
{
    int n;
    int max=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);    
    }
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
          
        }
         
    }
      printf("%d",max);
    return 0;
}
