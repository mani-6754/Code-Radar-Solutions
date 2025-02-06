#include <stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(int j=1;j<=n-2;j++)
    {
        printf("*\n");
    }
    for(int k=1;k<=n-2;k++)
    {
        printf(" ");
    }
    for(int l=1;l<=n-2;l++)
    {
        printf("*\n");
    }
    printf("\n");
    for(int m=1;m<=n;m++)
    {
        printf("*");
    }
}