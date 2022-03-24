#include <stdio.h>

typedef struct {
    unsigned int x : 2;
    unsigned int y : 2;
    unsigned int z : 2;
} Test;

int main() {
    //Let's assign values that exceed the bitfield size
    Test test;
    test.x = 4;
    test.y = 1;
    test.z = 6;
    printf("%d %d %d\n", test.x, test.y, test.z);
}