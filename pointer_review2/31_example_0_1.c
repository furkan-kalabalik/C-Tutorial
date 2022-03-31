#include <stdio.h>

typedef struct {
    int id;
    float examResults[3];
} Student;


typedef struct {
    int numberOfStudents;
    Student *students;
} Class;

float classAverage(Class *c) {
    float sum = 0, avg;
    for(int i = 0; i < c->numberOfStudents; i++) {
        for(int j = 0; j < 3; j++) {
            sum += c->students[i].examResults[j];            
        }
    }

    avg = sum / (3*c->numberOfStudents);
    return avg;
}

Student *mostSuccessfulStudent(Class *c) {
    float highestAvg = 0;
    Student *mostSuccesfull = NULL;

    for(int i = 0; i < c->numberOfStudents; i++){
        float sum = 0;
        float currentAvg;
        for(int j = 0; j < 3; j++) {
            sum = sum + c->students[i].examResults[j];;
        }

        currentAvg = sum / 3;
        if(currentAvg > highestAvg) {
            highestAvg = currentAvg;
            mostSuccesfull = &(c->students[i]);
        }
    }

    return mostSuccesfull;
}

int main() {
    Student students[3] = {
        {1, {1.0, 2.0, 3.0}},
        {2, {4.0, 5.0, 6.0}},
        {3, {7.0, 8.0, 9.0}}
    };

    Class class = {3, students};
    Student *mostSuccessfull = mostSuccessfulStudent(&class);
    printf("Average of class: %1.f\n", classAverage(&class));
    printf("Most succesfull id: %d\n", 
        mostSuccessfull->id);
}