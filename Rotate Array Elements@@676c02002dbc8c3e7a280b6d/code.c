#include<stdio.h>
int main()
{
    int n,a,k;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    for(int j=n-k;j<n;j++)
    {
        printf("%d",s[j]);
    }
    for(int l=0;l<n-k;l++)
    {
        printf("%d",s[k]);
    }
}