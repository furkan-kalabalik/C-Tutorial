#include <stdio.h>

typedef struct Employee
{
    int id;
    int age;
    int salary;
} Employee;

int main() {
    Employee *emp;
    Employee employee;
    Employee employeeArray[2];
    employee.id = 1;
    employee.age = 20;
    emp = &employee;
    printf("ID: %d\n", emp->id);
    printf("AGE: %d\n", emp->age);
    for (int i = 0; i < 2; i++)
    {
        printf("employeeArray[%d]: %p\n", i, &employeeArray[i]);
    }
}