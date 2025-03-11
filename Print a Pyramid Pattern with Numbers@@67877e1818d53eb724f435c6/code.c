#include <stdio.h>
int main() {
   int i, space, rows, k = 1;
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 1) {
      for (space = 1; space <= rows - i; ++space) {
         printf(" ");
      }
      while (k != 2 * i - 1) {
         printf("%d",k);
         ++k;
      }
      printf("\n");
   }
   return 0;
}