#include <stdio.h>

int main() {
    int arr[3][3];
    int temp;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("You entered\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d%s", arr[i][j], (j == 2) ? "" : " ");
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        temp = arr[i][0];
        arr[i][0] = arr[i][2];
        arr[i][2] = temp;
    }

    printf("\nFlipped array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d%s", arr[i][j], (j == 2) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}