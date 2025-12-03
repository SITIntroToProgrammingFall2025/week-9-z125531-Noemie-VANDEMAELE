#include <stdio.h>
#include <limits.h>

int main() {
    int r, g, b;
    int min_dist_sq = INT_MAX;
    int current_dist_sq;
    char *nearest_color = NULL;

    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    current_dist_sq = r * r + g * g + b * b;
    if (current_dist_sq < min_dist_sq) {
        min_dist_sq = current_dist_sq;
        nearest_color = "Black";
    }

    current_dist_sq = (r - 255) * (r - 255) + g * g + b * b;
    if (current_dist_sq < min_dist_sq) {
        min_dist_sq = current_dist_sq;
        nearest_color = "Red";
    }

    current_dist_sq = r * r + (g - 255) * (g - 255) + b * b;
    if (current_dist_sq < min_dist_sq) {
        min_dist_sq = current_dist_sq;
        nearest_color = "Green";
    }


    current_dist_sq = r * r + g * g + (b - 255) * (b - 255);
    if (current_dist_sq < min_dist_sq) {
        min_dist_sq = current_dist_sq;
        nearest_color = "Blue";
    }


    current_dist_sq = (r - 255) * (r - 255) + (g - 255) * (g - 255) + (b - 255) * (b - 255);
    if (current_dist_sq < min_dist_sq) {
        min_dist_sq = current_dist_sq;
        nearest_color = "White";
    }

    printf("The nearest color is %s\n", nearest_color);

    return 0;
}