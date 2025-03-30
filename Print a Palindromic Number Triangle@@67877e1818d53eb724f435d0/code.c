#include <stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int combo(int a,int b)
{
    int acb=fact(a)/(fact(b)*fact(a-b));
    return acb;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int k=n;k>i;k--)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            int icj=combo(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }

    return 0;
}
