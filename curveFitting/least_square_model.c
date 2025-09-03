#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    printf("Enter length: ");
    int len;
    scanf("%d", &len);

    double **list = (double **)malloc(sizeof(double*) * len);
    if (list == NULL) {
        perror("Memory Allocation failed.");
    }

    for (int i = 0; i < len; i++) {
        list[i] = (double *)malloc(sizeof(double) * 2);
        if (list[i] == NULL) {
            perror("Memory Allocation failed");
        }
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("X = ");
                scanf("%lf", &list[i][0]);
            } else {
                printf("Y = ");
                scanf("%lf", &list[i][1]);
            }
        }
    }

    printf("List:\n");
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.1lf ", list[i][j]);
        }
        printf("\n");
    }

    double y_bar = 0.0, x_bar = 0.0;

    for (int i = 0; i < len; i++) {
        x_bar += list[i][0];
        y_bar += list[i][1];
    }

    x_bar = x_bar / len;
    y_bar = y_bar / len;
    double Sxy = 0.0, Sxx = 0.0;

    for (int i = 0; i < len; i++) {
        Sxy += (list[i][0] - x_bar) * (list[i][1] - y_bar);
        Sxx += pow((list[i][0] - x_bar), 2);
    }

    double b = Sxy / Sxx;
    double a = y_bar - b * x_bar;

    printf("y = %lf + %lfx", a, b);
    
    double SET = 0.0, SSE = 0.0;
    for (int i = 0; i < len; i++) {
        SET += pow((list[i][1] - y_bar), 2);
        SSE += pow((list[i][1] - (list[i][0] * b + a)), 2);
    }

    double r2 = 1 - SSE / SET;

    printf("R2 Score = %lf", r2);

    for (int i = 0; i < len; i++) {
        free(list[i]);
    }
    free(list);

    return 0;
}