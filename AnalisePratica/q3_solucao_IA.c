#include <stdio.h>

int main(void) {

    int n;
    int x;
    int xmin = 255;
    int xmax = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d", &x);

        if (x < xmin)
            xmin = x;

        if (x > xmax)
            xmax = x;
    }

    scanf("%d", &x);

    double normalizado;

    if (xmax == xmin) {
        normalizado = 0.0;
    } else {
        normalizado = (double)(x - xmin) / (xmax - xmin);
    }

    printf("%.2f\n", normalizado);

    return 0;
}