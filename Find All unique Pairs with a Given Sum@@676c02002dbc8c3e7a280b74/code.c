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
    for (int j = 0; j < n - 1; j++) {
        for (int l = j + 1; l < n; l++) {
            // Check if the sum of the pair equals k
            if (s[j] + s[l] == k) {
                // To avoid duplicates, check if this pair was already printed
                int isDuplicate = 0;
                
                // Check previous pairs only up to current j and l
                for (int m = 0; m < j; m++) {
                    for (int n = m + 1; n < l; n++) {
                        if ((s[m] == s[j] && s[n] == s[l]) || (s[m] == s[l] && s[n] == s[j])) {
                            isDuplicate = 1;
                            break;
                        }
                    }
                    if (isDuplicate) {
                        break;
                    }
                }

                // Print the pair only if it's not a duplicate
                if (!isDuplicate) {
                    printf("%d %d\n", s[j], s[l]);
                }
            }
        }
    }

    return 0;
}


