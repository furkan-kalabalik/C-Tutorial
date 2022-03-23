#include <stdio.h>

typedef enum{
    CEO,
    MANAGER,
    WORKER
} EmployeeType;

typedef struct{
    int ceo_id;
    float salary;
    int num_of_workers;
    int num_of_managers;
} Ceo;

typedef struct{
    int manager_id;
    float salary;
    int branch_id;
    int num_of_workers;
} Manager;

typedef struct {
    int worker_id;
    float salary;
    int branch_id;
} Worker;

typedef union{
    Ceo ceo;
    Manager manager;
    Worker worker;
} EmployeeInfo;

typedef struct{
    EmployeeType type;
    EmployeeInfo info;
} Employee;

Employee createCeo(int ceo_id, float salary, int num_of_workers, int num_of_managers){
    Employee ceo;
    ceo.type = CEO;
    ceo.info.ceo.ceo_id = ceo_id;
    ceo.info.ceo.salary = salary;
    ceo.info.ceo.num_of_workers = num_of_workers;
    ceo.info.ceo.num_of_managers = num_of_managers;
    return ceo;
}

Employee createManager(int manager_id, float salary, int branch_id, int num_of_workers){
    Employee manager;
    manager.type = MANAGER;
    manager.info.manager.manager_id = manager_id;
    manager.info.manager.salary = salary;
    manager.info.manager.branch_id = branch_id;
    manager.info.manager.num_of_workers = num_of_workers;
    return manager;
}

Employee createWorker(int worker_id, float salary, int branch_id){
    Employee worker;
    worker.type = WORKER;
    worker.info.worker.worker_id = worker_id;
    worker.info.worker.salary = salary;
    worker.info.worker.branch_id = branch_id;
    return worker;
}

void printEmployee(Employee employee){
    if(employee.type == CEO){
        printf("CEO ID: %d - SALARY: %.2f - WORKER NUM: %d - MANAGER NUM: %d\n", employee.info.ceo.ceo_id, employee.info.ceo.salary, employee.info.ceo.num_of_workers, employee.info.ceo.num_of_managers);
    } else if(employee.type == MANAGER){
        printf("MANAGER ID: %d - SALARY: %.2f - BRANCH ID: %d - WORKER NUM: %d\n", employee.info.manager.manager_id, employee.info.manager.salary, employee.info.manager.branch_id, employee.info.manager.num_of_workers);
    } else if(employee.type == WORKER){
        printf("WORKER ID: %d - SALARY: %.2f - BRANCH ID: %d\n", employee.info.worker.worker_id, employee.info.worker.salary, employee.info.worker.branch_id);
    }
}

int main() {
    Employee ceo = createCeo(1, 100000, 10, 5);
    Employee manager = createManager(2, 10000, 1, 5);
    Employee worker = createWorker(3, 1000, 1);
    printEmployee(ceo);
    printEmployee(manager);
    printEmployee(worker);
    return 0;
}