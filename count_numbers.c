#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int cnt [6] ={0};
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0)
        {
            cnt[0]++;
        }
          else if(a[i] == 1)
        {
            cnt[1]++;
        }
          else if(a[i] == 2)
        {
            cnt[2]++;
        }
    }
    printf("%d",cnt[0]);
     printf("%d",cnt[1]);
    printf("%d",cnt[2]);

    return 0;
}
