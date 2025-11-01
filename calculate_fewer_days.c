#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a1,b1,m;
        scanf("%d%d%d",&a1,&b1,&m);
        double newDays = (double)a1*m/(a1+b1);
        int fewerDays = m-(int)newDays;
        printf("%d\n",fewerDays);
    }
    return 0;
}
