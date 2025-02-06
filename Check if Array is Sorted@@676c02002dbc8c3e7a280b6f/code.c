#include <stdio.h>
void main()
{
    int n,a;
    scanf("%d\n",&n);
    int s[n];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    for(int j=0;j<n-1;j++)
    {
        if(s[j+1]<s[j])
        {
            printf("Not Sorted");
        }
    }
    printf("Sorted");
}