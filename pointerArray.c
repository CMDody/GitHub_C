#include <stdio.h>


int main(void)  {

char *st[] = {
"Hello", 
"How", 
"are", 
"you",
};

for(int i=0;i<4; i++) {
printf("%s ", st[i]);
}

printf("\n");

return 0;
}
