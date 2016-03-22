#include <stdio.h>

int main(void) {

int a;

for(a=0;a<10000;a++) {

printf("-");
printf("\b");
printf("\\");
printf("\b");
printf("|");
printf("\b");
printf("/");
printf("\b");

}

printf("\n");

return 0;
}
