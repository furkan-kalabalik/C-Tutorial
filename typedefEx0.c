#include <stdio.h>

typedef int MY_INT;
typedef char BYTE;

enum colors {RED, GREEN, BLUE};
typedef enum colors COLOR;

typedef enum {
    PINK,
    ORANGE,
    PURPLE
} OTHER_COLOR;

typedef union {
    int i;
    double d;
    char c;
    enum colors b;
} DataValue;

typedef int Int16;
typedef float F32;

struct Person {
    Int16 id;
    F32 salary;
}

int main() {
    my_int num = 5;
    printf("num: %d\n", num);
    COLOR color = RED;
    printf("color: %d\n", color);
    OTHER_COLOR other_color = PINK;
    printf("other_color: %d\n", other_color);

    BYTE byte = 'a';
    printf("byte: %c\n", byte);

    DataValue d;
    d.i = 5;
    printf("d.i: %d\n", d.i);
    return 0;
}
