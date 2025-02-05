#include <stdio.h>
void main()
{
    char a[100];
    scanf("%s",&a);
    for(int i=0;i<=sizeof(a);i++)
    {
        int c=0;
        if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u')
        {
            c+=1;
        }
    printf("%d",c);
    }
}