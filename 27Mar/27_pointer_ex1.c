#include <stdio.h>
#include <string.h>

int worldLength(char *word){
    int counter = 0;
    //Word[0] = *(word+0)
    //Word[2] = *(word+1)
    //Word[1] = *(word+2)
    while(*(word+counter) != '\0'){
        counter++;
    }
    return counter;
}

int main() {
    char word[] = "hello";

}