#include <stdio.h>


int main(void) {

char str[32];

printf("Enter a text to the field ---> ");
gets(str);

printf("Your text is ---> %s \n", str);

return 0;
}
