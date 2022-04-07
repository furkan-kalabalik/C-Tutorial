#include <stdio.h>
#include <string.h>


int main() {
    char str1[100] = "Hello";
    char str2[100] = ""; //Notice here
    char str3[100] = "Merhaba";
    strcat(str2, str1);
    printf("str1 = %s, length = %d\n", str1, strlen(str1));
    printf("str2 = %s, length = %d\n", str2, strlen(str2));
    strcat(str2, " in Turkish ");
    printf("str2 = %s, length = %d\n", str2, strlen(str2));
    strcat(str2, str3);
    printf("str2 = %s, length = %d\n", str2, strlen(str2));
    return 0;
}