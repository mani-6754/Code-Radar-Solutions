#include <stdio.h>

int main()
{
    int n,e=0,o=0,a;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    for(int j=0;j<n;j++)
    {
        if(s[j]%2==0)
        {
            e+=1;
        }
        else
        {
            o+=1;
        }
    }
    printf("%d %d",e,o);

    return 0;
}