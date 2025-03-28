#include <stdio.h>

int main() 
{
    int rows, i, j, number = 1;
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        for (j = rows; j>=i-1; j--)
        {
            printf("  ");
        }
        for (int k = 1;k <= i; k++) {
            printf("%d ",k);
        }

        printf("\n");
    }

    return 0;
}