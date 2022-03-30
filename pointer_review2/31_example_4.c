#include <stdio.h>

typedef enum {
    BUSY,
    IDLE
} State;

typedef struct{
    int id;
    int remainingTime;
    State state;
} Worker;

void printMenu(){
    printf("1. Assign task to a worker\n");
    printf("2. Display the status of the workers\n");
    printf("3. Next iteration\n");
    printf("4. Exit\n");
}

//Assign task to a worker, find first idle worker and assign task.
//If no idle workers, print "No idle workers"
void assignTask(Worker *workers){
    //Fill here
}

//Display the status of the workers
//Busy or Idle, print the id of the worker
void displayStatus(Worker *workers){
    //Fill here
}

//Iterate through the workers and decrement remaining time by 1
//If remaining time is 0, print "DONE!!!!! Worker 'id' is now idle"
void nextIteration(Worker *workers){
    //Fill here
}

int main() {
    Worker workers[10];
    int choice;

    //Initialize the workers
    //Look how we access to workers array using pointer arithmetic
    for(int i = 0; i < 10; i++){
        (workers+i)->id = i;
        (workers+i)->remainingTime = 0;
        (workers+i)->state = IDLE;
    }

    do
    {
        printMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            assignTask(workers);
            break;
        case 2:
            displayStatus(workers);
            break;
        case 3:
            nextIteration(workers);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            break;
        }
    } while (choice != 4);
    
}