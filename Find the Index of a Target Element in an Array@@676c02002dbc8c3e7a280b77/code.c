#include<stdio.h>
int main()
{
    int n,k,a;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    scanf("\n%d",&k);
    for(int j=0;j<n;j++)
    {
        if(s[j]==k)
        {
            printf("%d",j);
        }
        else
        {
            printf("%d",-1);
        }
    }
}