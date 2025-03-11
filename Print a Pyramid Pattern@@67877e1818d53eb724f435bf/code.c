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
        {
            printf("*");
        }
        printf("\n");
    }

    int a;
    scanf("%d",&a);
     for(int i=1;i<=a;i++)
    {
        for(int k=a-1;k>=i;k--)
    {
        printf(" ");
    }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
