#include <stdio.h>

void main()
{
    int a,b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {b=65;
        for(int j=1;j<=i;j++)
        {
            printf("%c ",b);
            b++;
        }
         printf("\n");
     }
}