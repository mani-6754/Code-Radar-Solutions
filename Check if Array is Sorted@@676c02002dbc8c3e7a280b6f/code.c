#include <stdio.h>
void main()
{
    int n,s[n];
    scanf("%d\n",&n);
    for(int i=1,i<=n,i++)
    {
        scanf("%d",&s[i]);
        if(s[i+1]>s[i])
    {
        printf("Not Sorted");
    }
    else
    {
        printf("Sorted");
    }
    }
}