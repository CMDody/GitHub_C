#include <stdio.h>

int main(void) {

char u;

printf("Type one character --->");

u=getchar();

switch(u) {

case 'c':
printf("Cemil \n");
break;

case 'm':
printf("Murat \n");
break;

case 'd':
printf("Dodanli \n");
break;

default:
printf("Wrong character \n");

}

return 0;
}
