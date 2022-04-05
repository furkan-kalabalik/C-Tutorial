#include <stdio.h>
#include <ctype.h>
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

    for(int j = 0; j < i; j++) {
        if(isalpha(name[j]) && isupper(name[j])) {
            name[j] = tolower(name[j]);
        } else if(isalpha(name[j]) && islower(name[j])) {
            name[j] = toupper(name[j]);
        }
    }
    printf("Changed name is: %s\n", name);
}