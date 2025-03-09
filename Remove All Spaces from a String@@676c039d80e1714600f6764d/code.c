#include <stdio.h>
void main()
{
    char a[100];
    scanf("%s",&a);
    for(int i=0;i<sizeof(a);i++)
    {
        if(a[i]==' ')
        {
            a[i]="";
        }
    }
    printf("%s",a);
}