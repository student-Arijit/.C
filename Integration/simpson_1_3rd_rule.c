#include <stdio.h>
#include <math.h>

double f(double x) {
    return (pow(x, 2) + 1);
}

int main(void) {
    printf("Enter the lower bound: ");

    int a;
    scanf("%d", &a);

    printf("Enter the upper bound: ");
    
    int b;
    scanf("%d", &b);

    printf("Enter the itretion number: ");

    int n;
    scanf("%d", &n);

    double h = (double)(b - a) / (double)n;
    double sum = f(a) + f(b);
    
    for (int i = 1; i < n; i++) {
        double x = a + i*h;
        sum += (i % 2 == 0 ? 2*f(x) : 4*f(x));
    }

    double T = (h/3)*sum;
    printf("%lf", T);

    return 0;
}