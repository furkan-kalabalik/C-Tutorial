#include <stdio.h>

typedef enum{ ABS, EBS, ESP, ECS} Brake;

typedef enum{AUTOMATIC, MANUAL} Gear;

typedef enum{RED, GREEN, BLUE, YELLOW, WHITE, BLACK} Color;

typedef enum{DIESEL, PETROL, HYBRID} Fuel;

typedef struct 
{
    int price;
    int year;
    int km;
    Brake brake;
    Gear gear;
    Color color;
    Fuel fuel;
} Car;

void setPrice(Car *car, int price) {
    car->price = price;
}
void setYear(Car *car, int year) {
    car->year = year;
}
void setKm(Car *car, int km) {
    car->km = km;
}
void setBrake(Car *car, Brake brake) {
    car->brake = brake;
}
void setGear(Car *car, Gear gear) {
    car->gear = gear;
}
void setColor(Car *car, Color color) {
    car->color = color;
}
void setFuel(Car *car, Fuel fuel) {
    car->fuel = fuel;
}

void constructCar(Car *car, int price, int year, int km, Brake brake,
    Gear gear, Color color, Fuel fuel){
        setPrice(car, price);
        setYear(car, year);
        setKm(car, km);
        setBrake(car, brake);
        setGear(car, gear);
        setColor(car, color);
        setFuel(car, fuel);
}

void printCar(Car *car) {
    printf("Price: %d\n", car->price);
    printf("Fuel: %d\n", car->fuel);
}

int main() {
    Car car;
    constructCar(&car, 21421, 2022, 63527, ABS, MANUAL, BLACK, HYBRID);
    printCar(&car);
}