#include <stdio.h>

int main(void) {

printf("\033[2J");  // Clear the screen than move cursor to (0,0)

printf("\033[10;20H"); // Move cursor to (10,20)

printf("Hello World \n");

return 0;
}
