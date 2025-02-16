#include <stdio.h>
void main()
{ 
    int num,count = 0;
    scanf("%ld",&num);
    while (num & 1 == 0) 
    { 
        count++;
        num >>= 1; // Shift right by one bit
    }
    printf("%d",count);
}