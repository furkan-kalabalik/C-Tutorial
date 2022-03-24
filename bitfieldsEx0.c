#include <stdio.h>

typedef struct 
{
    int day;
    int month;
    int year;
} Date; //3*4 = 12 bytes(96 bits)


typedef struct 
{
    unsigned int day:5; // 5 bits
    unsigned int month:4; // 4 bits
    unsigned int year; // 32 bits
} DateB; // 41 bits adds up to 64 bits

void printBits(unsigned int num)
{
   for(int bit=0;bit<(sizeof(unsigned int) * 8); bit++)
   {
      printf("%i ", num & 0x01);
      num = num >> 1;
   }
}

int main() {
    Date date;
    DateB dateB;
    date.day = 25;
    date.month = 12;
    date.year = 1997;
    dateB.day = 25;
    dateB.month = 12;
    dateB.year = 1997;
    printf("Size of unsigned int: %ld\n", sizeof(unsigned int));
    printf("%d %d %d\n", date.day, date.month, date.year);
    printf("%d %d %d\n", dateB.day, dateB.month, dateB.year);
    printf("Size of Date: %ld\n", sizeof(Date));
    printf("Size of DateB: %ld\n", sizeof(DateB));
    return 0;
}