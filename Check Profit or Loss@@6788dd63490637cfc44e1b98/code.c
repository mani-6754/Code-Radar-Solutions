#include <stdio.h>
void main()
{
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(cp<sp)
    {
        printf("Profit");
    }
    else if(sp<cp)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit No Loss");
    }
}