#include<stdio.h>
int main()
{
    int taka;
    int khoroch;
    scanf("%d %d",&taka,&khoroch);
    if (taka >= 5000)
    {
        printf("Cox's bazar jabo\n");
        int obosisto = taka - khoroch;
          if(obosisto >= 8000)
          {
            printf("saint martin o jabo");
          }
          else
          {
         printf("saint martin jawa ar holo na jabo");

          }
    }
    else
    {
    printf(" jabo na kuthao");
 
    }
    return 0;
}
