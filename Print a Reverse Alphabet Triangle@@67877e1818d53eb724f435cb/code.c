#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {b=65;
        for(int j=i;j>0;j--)
        {
            printf("%c",b);
            b++;
        }
        printf("\n");
    }
}