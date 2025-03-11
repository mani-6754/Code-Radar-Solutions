#include <stdio.h>

int main() {
    int n,a;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        arr[i]=a;
    }
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int min, max;

    // Initialize min and max with the first element
    min = max = arr[0];

    // Iterate through the rest of the array
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];  // Update min if a smaller element is found
        }
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger element is found
        }
    }

    // Print the minimum and maximum values
    printf("%d", min);
    printf("%d", max);

    return 0;
}