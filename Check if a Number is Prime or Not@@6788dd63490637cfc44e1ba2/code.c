#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    for(int i=2;i<=a;i++)
    {
        int f=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            printf("Prime");
        }
    }
}