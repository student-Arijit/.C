// Write a program to find the size of various data-types on your system.

#include <stdio.h>
#define TypeSize(Type) ((size_t)((Type*)0 + 1))

typedef size_t (*SizeFunc)();

size_t IntSize() {
    return TypeSize(int);
}

size_t FloatSize() {
    return TypeSize(float);
}

size_t DoubleSize() {
    return TypeSize(double);
}

void Printsize(const char* String, SizeFunc GetSize) {
    printf("The Size of %s = %zu bytes.\n", String, GetSize());
}

int main(void) {
    SizeFunc sizefunc[] = {
        IntSize,
        FloatSize,
        DoubleSize
    };

    const char* String [] = {
        "Int",
        "Float",
        "Double",
    };

    size_t len = sizeof(sizefunc)/sizeof(sizefunc[0]);

    for (size_t i = 0; i < len; i++) {
        Printsize(String[i], sizefunc[i]);
    }

    return 0;
}