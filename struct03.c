#include <stdio.h>


struct coor {
int x;
int y;
int z;
char str[32];
} ob={.x=12, .y=32, .z=19, .str="Hello World"};
// Yapılara ön değer atama (C99)

int main(void) {

printf("x=%d \n", ob.x);
printf("y=%d \n", ob.y);
printf("z=%d \n", ob.z);
printf("String: %s \n", ob.str);

return 0;
}
