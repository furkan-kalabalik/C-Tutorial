#include<stdio.h>

typedef struct{
    int citizen_id;
    int age;
} Person;

int main() {
    Person persons[3];
    Person *personPtr = &persons[0];
    printf("personPtr: %p\n", personPtr);
    personPtr++;
    printf("personPtr: %p\n", personPtr);
}