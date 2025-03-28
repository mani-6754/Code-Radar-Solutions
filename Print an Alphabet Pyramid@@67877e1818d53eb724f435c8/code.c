#include <stdio.h>

int main() 
{
    int rows, i, j;
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        int number =65;
        for (int k = 1;k <= i; k++) {
            printf("%c ",number);
        }
        printf("\n");
        number++;
    }

    return 0;
}