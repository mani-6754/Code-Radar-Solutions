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
        for(int k=1;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}