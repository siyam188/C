#include<stdio.h>
int main()
{
    int a=3;
    int b=4;
    int tmp=a;
    a=b;
    b=a;
    b=tmp;
    printf("%d%d",a,b);
    return 0;
}
