#include <stdio.h>
#include <math.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] <= 1) {
            continue;
        }

        int isComposite = 0;

        for (int j = 2; j <= sqrt(arr[i]); j++) {
            if (arr[i] % j == 0) {
                isComposite = 1;
                break;
            }
        }

        if (isComposite) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}