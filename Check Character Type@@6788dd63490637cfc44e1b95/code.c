#include <stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        printf("Vowel");
    }else if(a>'a'&&a<='z'|| a>'A'&&a<='Z'){
        printf("Consonant");
    }else if(a>='0'&&a<='9'){
        printf("Digit");
    }else{
        printf("Special Character");
    }
}