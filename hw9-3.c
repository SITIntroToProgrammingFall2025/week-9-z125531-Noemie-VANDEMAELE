#include <stdio.h>

int main() {
    long long arr[5];
    int n = 5;
    int i, j, min_idx;
    long long temp;

    for (i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%lld%s", arr[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");

    return 0;
}