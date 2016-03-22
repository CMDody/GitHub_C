#include <stdio.h>

int main(void) {

char x[32];

printf("Enter a text --->");

scanf("%[aeiou]", x);

printf("After Fliteration ---> %s \n", x);


return 0;
}
