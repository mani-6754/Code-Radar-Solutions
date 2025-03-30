#include<stdio.h>
int main()
{
    int n,a,c;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(s[j]==s[k])
            {
                c=s[j];
                break;
            }
            else
            {
                c=-1;
            }
        }
    }
    printf("%d",c);
}