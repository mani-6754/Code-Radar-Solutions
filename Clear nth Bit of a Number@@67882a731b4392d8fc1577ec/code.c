#include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=(a>>b)&1;
    if(c==1)
    {
        (a>>b)&1=0;
    }
    {
        printf("%d",a);
    }
}