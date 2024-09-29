//Write a program using Structures to read and display the information about a student

#include <stdio.h>

struct STUDENT {
    int roll;
    char name[10];
};

void Get_Data(struct STUDENT*);
void Print_Data(struct STUDENT*);

int main(void) {
    struct STUDENT std[10];

    Get_Data(std);

    Print_Data(std);

    return 0;
}

void Get_Data(struct STUDENT Data[]) {
    for (size_t i = 0; i < 1; i++) {
        printf("Enter your name:");
        scanf("%s", Data[i].name);
        printf("Enter your roll");
        scanf("%d", &Data[i].roll);
    }
}

void Print_Data(struct STUDENT Data[]) {
    for (size_t i = 0; i < 1; i++) {
        printf("your name: %s", Data[i].name);
        printf("your roll %d", Data[i].roll);
    }
}