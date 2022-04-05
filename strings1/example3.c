#include <stdio.h>

int main() {
    char name[20];
    int i = 0;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("First character: %c\n", name[0]);
    for(i = 0; i < 20 && name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");
    printf("Last character: %c\n", name[i - 1]);
}