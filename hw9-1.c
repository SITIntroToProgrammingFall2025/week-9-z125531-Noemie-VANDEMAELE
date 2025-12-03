#include <stdio.h>

int main() {
    float a, b, c, d;
    float determinant;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    determinant = a * d - b * c;

    printf("You entered\n");
    printf("%.0f %.0f\n", a, b);
    printf("%.0f %.0f\n", c, d);
    printf("Determinant is %.6f\n", determinant);

    return 0;
}