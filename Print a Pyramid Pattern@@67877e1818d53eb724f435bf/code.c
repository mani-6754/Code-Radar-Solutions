#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>0;j--)
        {
        printf(" ");
        }
        for(int k=1;k<=i;k++)
        {k-=2;
            printf("*");
        }
        printf("\n");
    }
}