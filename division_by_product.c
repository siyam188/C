#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    while (x--)
    {
       long long int m,a,b,c;
       scanf("%ld%ld%ld%ld",&m,&a,&b,&c);
       long long p = (a*b*c);
       if(p==0)
       {
        printf("-1\n");
        continue;
       }
       else if(m%p==0)
       {
        printf("%ld\n",m/p);
       }
       else
       {
          printf("-1\n"); 
       }
    }
    
    return 0;
}
