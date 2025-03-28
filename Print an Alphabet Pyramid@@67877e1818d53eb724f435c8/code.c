#include <stdio.h>

int main() 
{
    int rows, i, j, number =65;
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        for (int k = 1;k <= i; k++) {
            printf("%c ",number);
        }
        printf("\n");
    }

    return 0;
}