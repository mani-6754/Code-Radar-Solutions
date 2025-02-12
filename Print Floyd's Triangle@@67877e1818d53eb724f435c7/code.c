#include <stdio.h>

void main()
{
    int a,b;
    scanf("%d",&a);
    b=1;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",b);
            b++;
        }
         printf("\n");
     }
}