#include <stdio.h>

void space2dash(const char *str);

int main(void)  {

space2dash("This is a test text");
printf("\n");

return 0;
}


void space2dash(const char *str) {

while(*str) {
if(*str==' ') printf("-");
else printf("%c", *str);
str++;
}
}
