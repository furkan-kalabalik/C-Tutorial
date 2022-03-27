#include<stdio.h>

int main() {
    double x[4] = {1.1, 2.2, 3.3, 4.4};

    //First element address
    printf("&x[0] = %p\n", &x[0]);
    double *sp = &x[0];
    //Last element address<
    printf("&x[3] = %p\n", &x[3]);
    double *lp = &x[3]; 
    //Size of double pointer
    printf("Size of double pointer: %lu\n", sizeof(double*));

    //Traverse array using pointer
    for (double *i = sp; i <= lp; i++)
    {
        printf("%p - %f\n", i, *i);
    }
}