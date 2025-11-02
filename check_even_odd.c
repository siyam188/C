#include<stdio.h>
int even_odd(int num1)
{
   if(num1%2==0)
   {
     printf("Even");
   }
   else
   {
    printf("odd");
   }
    return 0 ;
}
int main()
{
    int a;
    scanf("%d",&a);  
     even_odd(a);    
          
    return 0;
}
