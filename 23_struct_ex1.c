#include <stdio.h>

typedef enum {
    BMW,
    Audi,
    Tesla,
    Ford
} Brand;

typedef enum {NO, YES} included;

typedef struct{
    included automaticTransmission;
    included navigationSystem;
    included parkingAssist;
} BmwUnique;

typedef struct{
    included rearCamera;
    included smartMirror;
} AudiUnique;

typedef struct{
    included autonomousDriving;
    included playingGames;
    included remoteControl;
} TeslaUnique;

typedef struct{
    included selfParking;
    included appleCarPlay;
} FordUnique;

typedef union{
    BmwUnique bmw;
    AudiUnique audi;
    TeslaUnique tesla;
    FordUnique ford;
} UniqueFeature;

typedef struct{
    Brand brand;
    int year;
    int miles;
    int price;
    UniqueFeature unique;
} Car;

void printCar(Car car){
    printf("Brand: %d\n", car.brand);
    printf("Year: %d\n", car.year);
    printf("Miles: %d\n", car.miles);
    printf("Price: %d\n", car.price);
    if(car.brand == BMW){
        printf("Automatic Transmission: %d\n", car.unique.bmw.automaticTransmission);
        printf("Navigation System: %d\n", car.unique.bmw.navigationSystem);
        printf("Parking Assist: %d\n", car.unique.bmw.parkingAssist);
    }
    else if(car.brand == Audi){
        printf("Rear Camera: %d\n", car.unique.audi.rearCamera);
        printf("Smart Mirror: %d\n", car.unique.audi.smartMirror);
    }
    else if(car.brand == Tesla){
        printf("Autonomous Driving: %d\n", car.unique.tesla.autonomousDriving);
        printf("Playing Games: %d\n", car.unique.tesla.playingGames);
        printf("Remote Control: %d\n", car.unique.tesla.remoteControl);
    }
    else if(car.brand == Ford){
        printf("Self Parking: %d\n", car.unique.ford.selfParking);
        printf("Apple CarPlay: %d\n", car.unique.ford.appleCarPlay);
    }
}

int main() {
    Car car1;
    car1.brand = BMW;
    car1.year = 2020;
    car1.miles = 100000;
    car1.price = 100000;
    car1.unique.bmw.automaticTransmission = YES;
    car1.unique.bmw.navigationSystem = YES;
    car1.unique.bmw.parkingAssist = NO;
    printCar(car1);
    return 0;
}
