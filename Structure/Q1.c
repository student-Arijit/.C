//Write a program using Structures to read and display the information about a student

#include <stdio.h>

struct STUDENT {
    int roll;
    char name[10];
};

int main(void) {
    struct STUDENT std;

    printf("Enter your name:");
    scanf("%s", std.name);
    printf("Enter your roll");
    scanf("%d", &std.roll);

    printf("your name = %s", std.name);
    printf("your roll = %d", std.roll);

    return 0;
}