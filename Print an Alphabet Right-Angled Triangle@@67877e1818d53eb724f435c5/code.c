#include <stdio.h>

void main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(char j='A';j<='Z';j++)
        {
            printf("%c ",j);
        }
         printf("\n");
     }
}