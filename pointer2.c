#include <stdio.h>


int main(void) {

double a, b;
int *p;

a=178.23;

p=(int *) &a;

b=*p;

printf("a = %f \n", a);
printf("p = %d \n", *p);
printf("b = %f \n", b); 

return 0;
}
