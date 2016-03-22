#include <stdio.h>

int main(void) {

int x, y;

y = (x=3, x+2);

printf("x=%d y=%d \n", x, y);

return 0;
}
