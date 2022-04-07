#include <stdio.h>
#include <string.h>


int main() {
    char str1[100] = "Hello";
    char str2[100] = ""; //Notice here
    char str3[100] = "Merhaba";
    
    if(strcmp(str1, str3) == 0) {
        printf("str1 and str3 are equal\n");
    } else {
        printf("str1 and str3 are not equal\n");
    }

    strcpy(str2, str1);
    printf("str1 = %s, length = %d\n", str1, strlen(str1));
    printf("str2 = %s, length = %d\n", str2, strlen(str2));

    if(strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }
    return 0;
}