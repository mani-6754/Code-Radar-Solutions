#include <stdio.h>
void main()
{
    int n,a;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    for(int j=0;j<n-1;j++)
    {
        if(s[j+1]<s[j])
        {
            printf("Not Sorted");
            //return 0;
        }
    }
    printf("Sorted");
   // return 0;
}