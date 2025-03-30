#include <stdio.h>

int main() {
    int n, a, c = -1;  // Initialize c to -1 by default

    // Input size of array
    scanf("%d", &n);

    int s[n];  // Declare array of size n

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        s[i] = a;
    }

    // Loop to find the first duplicate
    int found = 0;  // Flag to break outer loop
    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            if (s[j] == s[k]) {  // If duplicate found
                c = s[j];  // Store the duplicate
                found = 1;  // Set flag to break outer loop
                break;  // Break inner loop
            }
        }
        if (found) {
            break;  // Break outer loop if duplicate found
        }
    }

    // Print the first duplicate or -1 if no duplicates
    printf("%d\n", c);

    return 0;
}
