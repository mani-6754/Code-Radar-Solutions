#include <stdio.h>

void main()
{
    int a;
    scanf("%d",&a);
    for(int k=a-1;k>0;k--)
    {
        printf(" ");
    }
     for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}