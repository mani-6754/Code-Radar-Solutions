#include <stdio.h>
void main()
{
    char a[100];
    char o,c;
    scanf("%s\n%c\n%c",&a,&o,&c);
    for(int i=0,i<sizeof(a),i++)
    {
        if(a[i]==o)
        {
            a[i]=c;
            break;
        }
    }
    printf("%s",a);
}