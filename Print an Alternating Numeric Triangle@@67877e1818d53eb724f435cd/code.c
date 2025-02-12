#include <stdio.h>

void main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(!(j%2==0)||j==1)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
         printf("\n");
     }
}