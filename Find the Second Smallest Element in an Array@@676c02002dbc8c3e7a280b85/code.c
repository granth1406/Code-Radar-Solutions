#include <stdio.h>

int main() {
    int n;

    // Input size of the array
    scanf("%d", &n);
    
    // If size is less than 2, second minimum does not exist
    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize minimum and second minimum
    int min = arr[0], sec_min = __INT_MAX__; // Using maximum possible integer value

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            sec_min = min;
            min = arr[i];
        } else if (arr[i] < sec_min && arr[i] != min) {
            sec_min = arr[i];
        }
    }

    if (sec_min == __INT_MAX__) {
        printf("-1\n");
    } else {
        printf("%d\n", sec_min);
    }

    return 0;
}