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
    // emp->id is equivalent to
    (*emp).id = 1;
    printf("ID: %d\n", (*emp).id);
}