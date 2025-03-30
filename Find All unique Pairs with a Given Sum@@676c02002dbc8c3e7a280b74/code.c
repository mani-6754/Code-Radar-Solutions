#include<stdio.h>
int main()
{
    int n,a,k;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    scanf("%d",&k);
    for(int j=0;j<n;j++)
    {
        for(int l=j+1;l<n;l++)
        {
            if(s[j]+s[l]==k)
            {
                if (s[j] + s[l] == k) {
                // Check if the pair has already been printed
                int duplicate = 0;
                for (int m = 0; m < j; m++) {
                    if ((s[m] == s[j] && s[m + 1] == s[l]) || (s[m] == s[l] && s[m + 1] == s[j])) {
                        duplicate = 1;
                        break;
                    }
                }

                // Print only if it's not a duplicate
                if (!duplicate) {
                    printf("%d %d\n", s[j], s[l]);
                }
        }
    }
}