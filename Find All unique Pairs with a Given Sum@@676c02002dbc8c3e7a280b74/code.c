#include<stdio.h>
int main()
{
    int n,a,k;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        sccanf("%d",&a);
        s[i]=a;
    }
    scanf("%d",&k)
    for(int j=0;j<n;j++)
    {
        for(int l=0;l<n;l++)
        {
            if(s[j]+s[l]==k)
            {
                printf("%d %d",j,l);
            }
        }
    }
}