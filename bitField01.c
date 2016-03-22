#include <stdio.h>
#include <stdlib.h>

//==================

struct bField {
char x;               // a characted data field (1 byte = 8 bit)
unsigned bit1: 1;     // 1 bit data field
unsigned bit2: 1;     // 1 bit data field
unsigned bit3x4: 4;   // 4 bit data field
unsigned bit4: 1;     // 1 bit data field
unsigned bit5: 1;     // 1 bit data field
int y;                // an intiger data field (4 byte = 32 bit)
};                    // +=======================================
                      // total = 6 byte = 48 bit data field

union myField {
struct bField u;
char v[6];
};

//==================

int main(void) {

union myField w;

printf("Enter a string ---> ");
scanf("%6s", w.v);

printf("First character is ---> %c \n", w.u.x);
printf("Bit1 = %d \n", w.u.bit1);
printf("Bit2 = %d \n", w.u.bit2);
printf("Bit3x4 = %d \n", w.u.bit3x4);
printf("Bit4 = %d \n", w.u.bit4);
printf("Bit5 = %d \n", w.u.bit5);
printf("An integer = %d \n", w.u.y);

return 0;
}
