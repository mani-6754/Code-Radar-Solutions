#include <stdio.h>

int main() {
    int n, k;

    // Input size of array
    scanf("%d", &n);

    int s[n];  // Declare array of size n

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    // Input target sum
    scanf("%d", &k);

    // Loop to find pairs whose sum is equal to k
    for (int j = 0; j < n; j++) {
        for (int l = j + 1; l < n; l++) {
            // Check for target sum
            if (s[j] + s[l] == k) {
                // Check if the pair has already been printed
                int duplicate = 0;
                for (int m = 0; m < j; m++) {
                    if ((s[m] == s[j] && s[m + 1] == s[l]) || (s[m] == s[l] && s[m + 1] == s[j])) {
                        duplicate = 1;
                        break;
                    }
                }

                // Print only if it's not a duplicate
                if (!duplicate) {
                    printf("%d %d\n", s[j], s[l]);
                }
            }
        }
    }

    return 0;
}
