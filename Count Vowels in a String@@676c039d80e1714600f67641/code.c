#include <stdio.h>
void main()
{
    char a[100];
    int c=0;
    scanf("%s",&a);
    for(int i=0;i<=sizeof(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            c+=1;
        }
    }
    printf("%d",c);
}