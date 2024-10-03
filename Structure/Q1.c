//Write a program using Structures to read and display the information about a student

#include <stdio.h>
#include <stdlib.h>

struct STUDENT {
    int roll;
    char name[10];
};

void Get_Data(struct STUDENT*);
void Print_Data(struct STUDENT*);

int main(void) {
    for (;;) {
        struct STUDENT std[10];
        int toggle;

        printf("\n1. Enter a detail of student\n2. Display saved detail\n3. Stop\nEnter your choice: ");
        scanf("%d", &toggle);

        switch(toggle) {
            case 1: {
                if (sizeof(std) == 10) {
                    printf("Memory full");
                } else {
                    Get_Data(std);
                }
            } break;

            case 2: {
                Print_Data(std);
            } break;

            case 3: {
                exit(0);
            } break;

            default: {
                printf("You entered wrong!!");
            }
        }

    }

    return 0;
}

void Get_Data(struct STUDENT *Data) {

        printf("Enter your name:");
        scanf("%s", Data -> name);
        printf("Enter your roll");
        scanf("%d", &Data -> roll);
    
}

void Print_Data(struct STUDENT Data[]) {
    for (size_t i = 0; i < sizeof(Data); i++) {
        printf("your name: %s", Data[i].name);
        printf("your roll %d", Data[i].roll);
    }
}