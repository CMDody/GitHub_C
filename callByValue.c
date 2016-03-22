#include <stdio.h>

int sqr(int x);   // This function calls by value;

int main(void) {

int a, b;

printf("Enter an integer ---> ");
scanf("%d", &a);

printf("The value of a=%d before sqr() function calling by value.\n", a);

b = sqr(a);

printf("The value of a=%d after sqr() function called by value.\n", a);

printf("The result is....\n");

printf("Square of %d is %d \n", a, b);


return 0;
}


int sqr(int x) {

return (x*x);
}
