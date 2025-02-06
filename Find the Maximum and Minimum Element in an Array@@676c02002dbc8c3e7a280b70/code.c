#include <stdio.h>
int main()
{
    int n,a,max,min;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    for(int j=0;j<n-1,j++)
    {
        for(int k=0;k<j;k++)
        {
            if(s[j]>s[k])
            {
                max=s[j];
            }
            if(s[j]<s[k])
            {
                min=s[j];
            }
        }
    }
    printf("%d %d",min,max);
}