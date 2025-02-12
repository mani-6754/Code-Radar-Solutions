#include <stdio.h>

void main()
{
    int a,b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {b=1;
        for(int j=1;j<=i;j++)
        {
            b++;
            printf("%d ",b);
        }
         printf("\n");
     }
}