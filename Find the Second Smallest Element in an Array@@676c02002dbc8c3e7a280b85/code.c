#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], sec_min = __INT_MAX__;

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