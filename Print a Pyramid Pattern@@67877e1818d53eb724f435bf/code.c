#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        printf(" ");
    }
    for(int j=1;j<=n;j++)
    {
        printf("*");
    }
}