#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
    int num;
    scanf("%d",&num);
    if(num==0)
    {
        printf("0");
    }
     while(num!=0)
    {
        printf("%d ",num%10);
        num/=10;
       
    }
    printf("\n");
   
    }
    return 0;
}
