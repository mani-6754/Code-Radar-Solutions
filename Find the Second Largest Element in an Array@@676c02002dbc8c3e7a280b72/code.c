#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    int max=s[0],max2=s[0];
    for(int j=0;j<n;j++)
    {
        if(max<s[j])
        {
            max=s[j];
        }
    }
    for(int j=0;j<n;j++)
    {
        if(s[j]==s[j+1])
        {
            max2=-1;
        }
        else if(max2<s[j]&&s[j]!=max)
        {
            max2=s[j];
        }
    }
    printf("%d",max2);
}