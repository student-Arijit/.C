#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double f(double x) {
    return (pow(x, 3) - x - 2); // x^3 - x - 2
}

int sign(double x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
}

int interval(int *start, int *end) {
    bool flag = 0;
    int it = 0;

    it = (f(it) == 0) ? it + 1 : it;
    *start = it;
    *end = it;
    int end1 = it;

    for (int i = 0; flag != 1; i++) {
        int t1 = sign(f(*end));
        int t3 = sign(f(*end + 1));
        int t2 = sign(f(end1));
        int t4 = sign(f(end1 - 1));

        *end += 1;
        end1 -= 1;
        
        if ((t1 + t3) == 0 || (t2 + t4) == 0) {
            flag = 1;
        } else {
            flag = 0;
        }
    }

    
}

int main(void) {
    printf("Enter the Number of Iterations: ");

    int iteration;
    scanf("%d", &iteration);



    return 0;
}