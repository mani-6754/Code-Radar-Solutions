#include <stdio.h>

void main()
{
    int a;
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {
        for(int j=i;j>0;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}