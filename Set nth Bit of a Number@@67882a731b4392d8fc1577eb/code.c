#include <stdio.h>
void main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    N |= 1 << K; 
    printf("%d",N);
    
}