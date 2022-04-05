#include <string.h>
#include <stdio.h>

int main() {
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    printf("Word: %s\n", str);
    printf("Length: %d\n", len);
}