#include<stdio.h>
int main()
{
    int n=5;
    int m;
    for(int i=1;i<=n;i++)
    {
         for(int k=n-1;k>=i;k--)
    {
        printf(" ");
        
    }
        for(int j=1;j<i;j++)
        {
            printf("%d",j);
        }
        m=i-1;
        for(int l=1;l<i-1;l++)
        {
            printf("%d",m);
            m--;
        }
        printf("\n");
    }
}
