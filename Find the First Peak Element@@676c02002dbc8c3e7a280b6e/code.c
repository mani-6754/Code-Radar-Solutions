#include <stdio.h>

int peakElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int left = 1;
        int right = 1;
        if (i > 0 && arr[i] <= arr[i - 1])
            left = 0;
        if (i < n - 1 && arr[i] <= arr[i + 1])
            right = 0;
        if (left && right) {
            return i;
        }
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", peakElement(arr, n));
    return 0;
}
