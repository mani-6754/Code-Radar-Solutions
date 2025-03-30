#include<stdio.h>
int main()
{
    int n,k,a,c;
    scanf("%d %d",&n,&k);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    for(int j=0;j<n;j++)
    {
        if(s[j]==k)
        {
            c+=1;
        }
    }
    printf("%d",c);
}