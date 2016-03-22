#include <stdio.h>

int main(void) {

int a;

a=10;

if(a==10) {
int a;
a=99;

printf("This is inner a=%d \n", a);

}

printf("This is outter a=%d \n", a);


return 0;
}
