#include <stdio.h>

void main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=64;j<=i;j++)
        {
            printf("%c ",j);
        }
         printf("\n");
     }
}