#include <stdio.h>

void main()
{
    int a,b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {b=64;
        for(int j=1;j<=i;j++)
        {
            printf("%c ",j);
        }
         printf("\n");
     }
}