#include <stdio.h>


int main(void) {

char str[32];

printf("Enter a text --->");
scanf("%c%s", &str[0], (str+2));
str[1] = '@';

printf("Your string ---> %s \n", str);

return 0;
}
