#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(int i=0;i<n;i++)
    {
      if(a[i]%2==0)
      {
        cnt1++;
      }
      else if(a[i]%3==0)
      {
         cnt2++;
      }
    }
    printf("%d %d ",cnt1,cnt2);
    
    return 0;
}
