#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
{
    int k_th;
    scanf("%d",&k_th);
    int strat = 0 ;
    for(int i=1;i<=k_th;i++)
    {
       strat++;
       if(strat % 3 == 0)
       {
           strat++;
           if( strat % 10 == 3)
           {
              strat++;
           }
       }
       else if (strat % 10 == 0)
       {
           strat++;
           if(strat % 3== 0)
           {
              strat++;
           }
       }
    }
    printf("%d\n",strat);
}
    return 0;
}
