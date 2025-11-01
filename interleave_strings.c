#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
    char s[55],t[55];
    scanf("%s%s",s,t);
    int len = strlen(s);
    int le = strlen(t);
    int min;
    if(len<le)
    {
        min=len;
    }
    else
    {
        min = le;
    }
    for(int i=0;i<min;i++)
    {
      printf("%c%c", s[i],t[i]);
    }
    int rem_s = len-min;
    if(rem_s>0)
    {
        for(int j=min;j<len;j++)
        {
            printf("%c",s[j]);
        }
    }
     int rem_t = le-min;
    if(rem_t>0)
    {
        for(int j=min;j<le;j++)
        {
            printf("%c",t[j]);
        }
    }
    printf("\n");
    }
    return 0;
}
