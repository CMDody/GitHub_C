#include <stdio.h>
#include "screenl.h"

int main(void) {

char str[32];

clearScreenToEnd();

printf("Screen cleared To The End Of Screen \n");
printf("Enter a new string ---> ");
scanf("%32s", str);

setCursorLocation(10, 10);

printf("New position of cursor \n");
printf("Your string ---> %s \n", str);

return 0;
}
