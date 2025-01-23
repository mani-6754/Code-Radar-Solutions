#include <stdio.h>
void main()
{
    float a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        printf("%d",a+b);
    }else if(c=='-'){
        printf("%d",a-b);
    }else if(c=='*'){
        printf("%d",a*b);
    }else{
        printf("%d",a/b);
    }
    
}