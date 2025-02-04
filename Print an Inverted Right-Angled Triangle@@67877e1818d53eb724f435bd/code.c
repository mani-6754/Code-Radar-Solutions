#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    for(int i=a;i>=a;i--)
    {
        for(int j=a;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}