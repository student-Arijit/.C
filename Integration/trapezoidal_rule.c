#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x) {
    return (pow(x, 2) + 1);
}

int main(void) {
    printf("Enter the upper bound: ");

    int b;
    scanf("%d", &b);

    printf("Enter the lower bound: ");

    int a;
    scanf("%d", &a);

    printf("Enter the sampling number: ");

    int n;
    scanf("%d", &n);

    double h = ((double)b - (double)a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double x = a + i*h;
        sum += 2*f(x);
    }

    double T = (h/2)*sum;
    printf("%lf\n", T);

    return 0;
}