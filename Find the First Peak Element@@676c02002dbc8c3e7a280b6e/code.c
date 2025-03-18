// #include <stdio.h>

// int peakElement(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         int left = 1;
//         int right = 1;
//         if (i > 0 && arr[i] <= arr[i - 1])
//             left = 0;
//         if (i < n - 1 && arr[i] <= arr[i + 1])
//             right = 0;
//         if (left && right) {
//             return i;
//         }
//     }
//     return 0;
// }

// int main() {
//     int arr[] = {1, 2, 4, 5, 7, 8, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("%d\n", peakElement(arr, n));
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n,a;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    for(int j=0;j<n-1;j++)
    {
        if(s[j+1]>s[j])
        {
            printf("%d",s[n-1]);
        }
        else
        {
    if(n<3)
    {
        if(s[j+1]>s[j])
        {
            printf("%d",s[j+1]);
            break;
        }
    }
    else if(s[j+1]>s[j]&&s[j+1]>s[j+2])
    {
            printf("%d",s[j+1]);
            break;
    }
    else
    {
        printf("-1");
        break;
    }
    }
    }
}
    