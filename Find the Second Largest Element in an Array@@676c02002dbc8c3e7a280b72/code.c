#include <stdio.h>

int main() {
    int n, a;

    // Input size of array
    scanf("%d", &n);

    int s[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        s[i] = a;
    }

    // Initialize max and max2
    int max = s[0], max2 = s[0];
    int allSame = 1;  // Flag to check if all elements are the same

    // Find the maximum element and check if all elements are the same
    for (int j = 1; j < n; j++) {
        if (s[j] != s[0]) {
            allSame = 0;  // Found a different element
        }
        if (s[j] > max) {
            max = s[j];
        }
    }

    // If all elements are the same, print -1
    if (allSame) {
        printf("-1\n");
        return 0;
    }

    // Initialize max2 to a valid value smaller than max
    max2 = (s[0] == max) ? s[1] : s[0];

    // Find the second maximum element
    for (int j = 0; j < n; j++) {
        if (s[j] > max2 && s[j] != max) {
            max2 = s[j];
        }
    }

    // Check if max2 is still equal to max, meaning no valid second max
    if (max2 == max) {
        printf("-1\n");
    } else {
        printf("%d\n", max2);  // Print second largest element
    }

    return 0;
}
