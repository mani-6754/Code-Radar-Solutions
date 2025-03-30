#include<stdio.h>
int main()
{
    int n,a,k;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    scanf("%d",&k);
    for(int j=0;j<n;j++)
    {
        for(int l=j+1;l<n;l++)
        {
            if(s[j]+s[l]==k)
            {
                printf("%d %d\n",s[j],s[l]);
            }
        }
    }
}