#include<stdio.h>
int main()
{
    int i,n;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d",i);
    }
}
