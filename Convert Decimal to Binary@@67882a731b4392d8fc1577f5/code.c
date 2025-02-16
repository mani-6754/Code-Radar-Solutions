#include<stdio.h>
void main() {
    unsigned int remainder,result = 0,multiplier = 1;
    unsigned int input;
    scanf("%ld",&input);
    while(input){
        remainder = input%2;
        result = remainder*multiplier + result;
        multiplier*=10;
        input/=2;
    }
    printf("%ld",result);
}