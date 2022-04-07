#include <stdio.h>
#include <string.h>


int main() {
    char str1[100] = "Hello";
    char str2[100] = "";
    char str3[100] = "Merhaba"; 
    int str3Len = strlen(str3);
    strcpy(str2, str1);
    strcpy(str3, str1);
    printf("str1 = %s, length = %d\n", str1, strlen(str1));
    printf("str2 = %s, length = %d\n", str2, strlen(str2));
    printf("str3 = %s, length = %d\n", str3, strlen(str3));
    printf("Let's see what happens to remaining characters\n");
    for(int i = 0; i < str3Len; i++) {
        printf("%c", str3[i]);
    }
    printf("\n");
    return 0;
}