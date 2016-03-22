#include <stdio.h>

int main(void) {

extern int x, y;

printf("%d --- %d \n", x, y);

return 0;
}


int x = 32;
int y = 54;
