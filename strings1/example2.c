#include <stdio.h>

int main() {
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("First character: %c\n", name[0]);
    printf("Last character: %c\n", name[19]);
    printf("Hello %s!\n", name);
}