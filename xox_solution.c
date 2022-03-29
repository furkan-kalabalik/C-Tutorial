#include <stdio.h>

void printTable(char *xox_table) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3c", *(xox_table + i * 3 + j));
        }
        printf("\n");
    }
    printf("\n");
}
// pointer+(column_number*row_you_want_to_access)
    //+column_you_want_to_access
// array[row_you_want_to_access][column_you_want_to_access]
int isGameFinished(char *xox_table) {
    for (int i = 0; i < 3; i++) {//Horizontal
        if (*(xox_table + i * 3 + 0) == *(xox_table + i * 3 + 1) && 
            *(xox_table + i * 3+ 0) == *(xox_table + i * 3 + 2) &&
            *(xox_table + i * 3) != '_' && 
            *(xox_table + i * 3 + 1) != '_' && 
            *(xox_table + i * 3 + 2) != '_') {
            return 1;
        }
    }
    for (int i = 0; i < 3; i++) { //Vertical
        if (*(xox_table + i + 0) == *(xox_table + i + 3) && 
            *(xox_table + i + 0) == *(xox_table + i + 6) &&
            *(xox_table + i) != '_' &&
            *(xox_table + i + 3) != '_' &&
            *(xox_table + i + 6) != '_') {
            return 1;
        }
    }
    if (*(xox_table) == *(xox_table + 4) && 
        *(xox_table) == *(xox_table + 8) &&
        *(xox_table) != '_' &&
        *(xox_table + 4) != '_' &&
        *(xox_table + 8) != '_') {
        return 1;
    }
    if (*(xox_table + 2) == *(xox_table + 4) && 
        *(xox_table + 2) == *(xox_table + 6) &&
        *(xox_table + 2) != '_' &&
        *(xox_table + 4) != '_' &&
        *(xox_table + 6) != '_') {
        return 1;
    }
    return 0;
}

int main() {
    //User1 X current_user = 0
    //User2 O current_user = 1
    int current_user = 0;
    char xox_table [3][3] = {
        {'_', '_', '_'},
        {'_', '_', '_'},
        {'_', '_', '_'}
    };
    //User1 starts to game
    while(!isGameFinished(xox_table[0])) {
        printTable(&xox_table[0][0]);
        if(current_user == 0) {
            printf("User1 X\n");
            int row, col;
            printf("Enter row and col: ");
            scanf("%d %d", &row, &col);
            if(*(xox_table[0] + row * 3 + col) == '_') {
                *(xox_table[0] + row * 3 + col) = 'X';
                current_user = 1;
            } else {
                printf("Invalid move!\n");
            }
        } else {
            printf("User2 O\n");
            int row, col;
            printf("Enter row and col: ");
            scanf("%d %d", &row, &col);
            if(*(xox_table[0] + row * 3 + col) == '_') {
                *(xox_table[0] + row * 3 + col) = 'O';
                current_user = 0;
            } else {
                printf("Invalid move!\n");
            }
        }
    }

    printf("Game finished! Winner is User%d\n", current_user-1);
}