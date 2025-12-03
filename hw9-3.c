#include <stdio.h>

int main() {

    double A[2][3];
    double B[3][2];
    double C[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%lf", &B[i][j]);
        }
    }

    printf("The first matrix you entered is\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%g%s", A[i][j], (j == 2) ? " " : " ");
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%g%s", B[i][j], (j == 1) ? " " : " ");
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][0] * B[0][j] +
                      A[i][1] * B[1][j] +
                      A[i][2] * B[2][j];
        }
    }

    printf("The multiplication product of matrix A and matrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%g%s", C[i][j], (j == 1) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}
