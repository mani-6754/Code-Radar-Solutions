#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {b=65;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",b);
            b++;
        }
        printf("\n");
    }
}