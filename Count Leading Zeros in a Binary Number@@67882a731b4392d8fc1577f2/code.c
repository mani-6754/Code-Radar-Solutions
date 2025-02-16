#include <stdio.h>



int main() {

    unsigned int num = 10; // Example number

    int leading_zeros = __builtin_clz(num);

    printf("%d", leading_zeros);

    return 0;

}
