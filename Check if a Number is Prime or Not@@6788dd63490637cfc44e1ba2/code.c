#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a<=1 || (a%2==0 && !(a==2)))
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}