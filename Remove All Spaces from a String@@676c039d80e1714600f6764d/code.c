#include <stdio.h>
void main()
{
    char a[100];
    scanf("%s",&a);
    char m="\0";
    for(int i=0;i<sizeof(a);i++)
    {
        if(a[i]==' ')
        {
            a[i]=m;
        }
    }
    printf("%s",a);
}