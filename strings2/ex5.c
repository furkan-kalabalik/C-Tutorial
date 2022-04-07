#include <stdio.h>
#include <string.h>


int main() {
    char str1[100] = "We're in the class.This is second sentence.";
    char str2[100] = "This only finds*the first occurrence*of the character.";
    char *secondSentence = strchr(str1, '.');
    secondSentence++;
    printf("%s\n", secondSentence);
    char *firstOccurrence = strchr(str2, '*');
    printf("%s\n", firstOccurrence);
    return 0;
}