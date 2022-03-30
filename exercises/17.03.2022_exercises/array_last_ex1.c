#include <stdio.h>

int isMagicSquare(int diag[][3]){
    int sumLeft = 0;
    int sumRight = 0;
    for(int i = 0; i < 3; i++){
        sumRight += diag[i][i];
    }
    for(int i = 0; i < 3; i++){
        sumLeft += diag[i][2-i];
    }
    if(sumLeft == sumRight){
        return 1;
    }else {
        return 0;
    }
}


int main()
{
    int diag1[3][3] = {
                    {4, 0, 3}
                    {0, 1, 0}
                    {5, 0, 4}
    };
    if(isMagicSquare(diag1)){
        printf("Magic square\n");
    }
    else{
        printf("Not a magic square\n");
    }
    return 0;
}
