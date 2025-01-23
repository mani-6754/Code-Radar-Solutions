#include <stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        printf("Vowel");
    }else if(a>'a'&&a<='z'){
        printf("Consonant");
    }else if(a>='1'&&a<='9'){
        printf("Digit");
    }else{
        printf("Special Character");
    }
}