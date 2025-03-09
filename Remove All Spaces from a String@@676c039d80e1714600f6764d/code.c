#include <stdio.h>
#include <stdlib.h>
void main()
{
    char a[100];
    int j;
    scanf("%s",&a);
    for(int i=0;i<sizeof(a);i++)
    {
        if(a[i]==' ')
        {
            a[j]=a[i];
        }
        a[j]='\0';
    }
    printf("%s",a);
}