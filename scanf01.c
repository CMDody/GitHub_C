#include <stdio.h>

int main(void) {

char x, y[12];

printf("Enter a text ---> ");
scanf("%c%s", &x, y);

printf("Character is ---> %c \n", x);
printf("String is ------> %s \n", y);

return 0;
}
