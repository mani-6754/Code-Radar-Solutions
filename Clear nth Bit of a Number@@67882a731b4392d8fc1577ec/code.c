#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if((a>>b)&1==1)
    {
        (a>>b)&1=0;
    }
    {
        printf("%d",a);
    }
}