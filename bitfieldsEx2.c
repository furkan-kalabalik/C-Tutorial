#include<stdio.h>

typedef struct {
    unsigned int x : 2;//00 01 10 11
    unsigned int y : 2;//00 01 10 11
    unsigned int z : 2;//00 01 10 11
} Bits; //1byte

typedef union
{
    Bits bits;
    unsigned int num; // 4 byte
} BitField;


int main() {
    BitField bitField;  // 101010
    bitField.num = 63; 
    printf("%d %d %d\n", bitField.bits.x,
    bitField.bits.y, bitField.bits.z);
    bitField.bits.x = 1; //11 -> 01
    printf("%d\n", bitField.num);

}