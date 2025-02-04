#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a<=1 || (a%2==0 && !(a==2)) || a%3==0)
    {
        printf("Not Prime");
    }
   // else if
    
    else
    {
        printf("Prime");
    }
}