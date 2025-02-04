#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    for(int i=a;i>=1;i--)
    {
        for(int j=a;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}