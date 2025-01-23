#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a<=100 && a>=1){
        printf("In Range");
    }else{
        printf("out of Range");
    }
}