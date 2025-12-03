#include <stdio.h>

int main() {
    float A[3][2];
    float B[2][3];
    float C[3][3] = {0};
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The first matrix you entered is\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.1f%s", A[i][j], (j == 1) ? "" : " ");
        }
        if (i < 2) {
            printf(" \n");
        } else {
            printf("\n");
        }
    }
    printf("\n");

    printf("The second matrix you entered is\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.0f%s", B[i][j], (j == 2) ? "" : " ");
        }
        printf(" \n");
    }
    printf("\n");

    printf("The multiplication product of matrix A and matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 0) {
                printf("%.1f%s", C[i][j], (j == 2) ? "" : " ");
            } else {
                printf("%.0f%s", C[i][j], (j == 2) ? "" : " ");
            }
        }
        printf(" \n");
    }

    return 0;
}