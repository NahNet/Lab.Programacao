#include <stdio.h>

int main(void) {

    int n;
    double x1, x2, x3;
    double y;

    scanf("%d", &n);

    if (n >= 3) {

        scanf("%lf", &x1);
        scanf("%lf", &x2);
        scanf("%lf", &x3);

        for (int i = 2; i <= n - 1; i++) {

            y = (x1 + x2 + x3) / 3.0;

            printf("%.2f ", y);

            x1 = x2;
            x2 = x3;

            if (i < n - 1) {
                scanf("%lf", &x3);
            }
        }

        printf("\n");
    }

    return 0;
}