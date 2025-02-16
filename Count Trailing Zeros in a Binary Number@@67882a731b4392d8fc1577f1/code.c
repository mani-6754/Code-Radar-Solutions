#include <stdio.h>
void main()
{ 
    int num,count = 0;
    while (num & 1 == 0) { // Check if the least significant bit is zero

        count++;

        num >>= 1; // Shift right by one bit

    }
    printf("%d",count);
}