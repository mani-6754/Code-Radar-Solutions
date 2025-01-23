#include <stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    if(a<"A" && a>"Z"){
        printf("Uppercase");
    }elseif(a<"a" && a>"z"){
        printf("Lowercase");
    }else{
        printf("Not an Alphabet");
    }
}