#include <stdio.h>
void main()
{
int n,c,a;
c=0;
scanf("%ld",&n);
a=(n&n);
for(int i=0;i<sizeof(n);i++)
{
    if(a[i]==0)
    {
        c+=1;
    }
}
printf("%d",c);
}