#include <stdio.h>
#include <string.h>

typedef struct Persons
{
    int citizen_id;
    int age;
} Person;

struct Jobs
{
    int id;
    int number_of_employees;
};

typedef struct Jobs Job;

int main()
{

    Person person;
    Job job;

    person.citizen_id = 12345;
    person.age = 30;
    job.id = 1;
    job.number_of_employees = 100;

    printf("Person: %d\n", person.citizen_id);
    printf("Person: %d\n", person.age);
    printf("Job: %d\n", job.id);
    printf("Job: %d\n", job.number_of_employees);
    return 0;
}