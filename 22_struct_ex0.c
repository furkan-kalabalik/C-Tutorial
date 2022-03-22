#include <stdio.h>

enum DataType{
    INT, BOOL, DOUBLE, CHAR
};

enum Boolean {
    FALSE, TRUE
};

union DataValue{
    int i;
    double d;
    char c;
    enum Boolean b;
};

struct Data{
    enum DataType type;
    union DataValue value;
};

void printData(struct Data d){
    switch(d.type){
        case INT:
            printf("type: INT\nvalue: %d\n", d.value.i);
            break;
        case BOOL:
            printf("type: BOOL\n");
            if(d.value.b == TRUE)
                printf("value: true\n");
            else
                printf("value: false\n");
            break;
        case DOUBLE:
            printf("type: DOUBLE\nvalue: %f\n", d.value.d);
            break;
        case CHAR:
            printf("type: CHAR\nvalue: %c\n", d.value.c);
            break;
    }
}

int main() {
    printf("Answer to question 1: %ld\n", sizeof(struct Data));
    printf("Size of double: %ld\n", sizeof(double));
    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of char: %ld\n", sizeof(char));
    printf("Answer 3: Size of enum Boolean: %ld\n", sizeof(enum Boolean));
    printf("Answer 2: Size of union DataValue: %ld\n", sizeof(union DataValue));
    printf("Answer to question 4: %ld\n", sizeof(enum DataType));
    
    struct Data d;
    d.type = INT;
    d.value.i = 5;
    printData(d);
    printf("\n");
    d.type = BOOL;
    d.value.b = TRUE;
    printData(d);
    printf("\n");
    d.type = DOUBLE;
    d.value.d = 3.14;
    printData(d);
    printf("\n");
    d.type = CHAR;
    d.value.c = 'a';
    printData(d);
    printf("\n");
}