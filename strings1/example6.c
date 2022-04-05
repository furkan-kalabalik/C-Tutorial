#include<stdio.h>

void greet1(char *name) {
    printf("Hello %s! from greet1\n", name);
}

void greet2(char name[]) {
    printf("Hello %s! from greet2\n", name);
}

int main() {
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);

    greet1(name);
    greet2(name);
}