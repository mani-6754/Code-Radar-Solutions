#include <stdio.h>
void main()
{
    char a[100];
    char b;
    int c=0;
    scanf("%s\n%c",&a,&b);
    for(int i=0;i<sizeof(a);i++)
    {
        if(a[i]==b)
        {
            c+=1;
        }
    }
    printf("%d",c);
}