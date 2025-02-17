#include <stdio.h>
void main()
{
    int N,K,p;
    scanf("%d %d",&N,&K);
    p=1<<K^N;
    printf("%d",p);
    
}