#include <stdio.h>

int main() {
    int freqArray[12] = {2, 3, 4, 4, 4, 4, 5, 5, 5, 6, 7, 7};
    int number;
    int counter = 0;

    printf("Enter number you find to frequency: ");
    scanf("%d", &number);

    for(int i = 0; i < 12; i++) {
        if(number == freqArray[i])
        {
            counter++;
        }
    }

    if(counter == 0) {
        printf("Your number is not in the list\n");
    } else {
        printf("Counter: %d\n", counter);
    }
}