#include<stdio.h>
void hello(int n,int i)
{
    if(i>n)
    {
        return;
    }
   printf("%d\n",i);
    hello(n,i+1);
}
int main()
{
   int n;
   scanf("%d",&n);
    hello(n,1);
    return 0;
}
