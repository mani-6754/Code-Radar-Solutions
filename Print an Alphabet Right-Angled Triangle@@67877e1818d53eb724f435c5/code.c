#include <stdio.h>

void main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(char j='A';j<='Z';j++)
        {
            for(char k='A';k<j;k++)
            {
                printf("%c ",j);
            }
        }
         printf("\n");
     }
}