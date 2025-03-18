#include <stdio.h>

int main() {
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        arr[i]=a;
    }
    int min, max;
    min = max = arr[0];
    for (int i = 1; i <n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d", min);
    printf("%d", max);

    return 0;
}