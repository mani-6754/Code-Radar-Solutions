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
            // Check if the sum equals k and print the first valid pair
            if (s[j] + s[l] == k) {
                printf("%d %d\n", s[j], s[l]);
                // Skip all future duplicate pairs
                while (l < n - 1 && s[l] == s[l + 1]) {
                    l++;
                }
            }
        }
        // Skip all future duplicate elements for `j`
        while (j < n - 1 && s[j] == s[j + 1]) {
            j++;
        }
    }

    return 0;
}
