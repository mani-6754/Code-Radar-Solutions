#include <stdio.h>
void main()
{
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if(c=='+'){
        printf("%f",a+b);
    }else if(c=='-'){
        printf("%f",a-b);
    }else if(c=='*'){
        printf("%f",a*b);
    }else{
        printf("%f",a/b);
    }
    
}