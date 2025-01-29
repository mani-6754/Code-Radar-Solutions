#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    for(int i=1; i<=a;i++)
    {
        a=i+a;
    }
    printf("%d",a);
}