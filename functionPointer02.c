#include <stdio.h>
#include <stdlib.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int operation(int a, int b, int (*FP)(int, int));

//----------------------------Upper prototype part;

int main(void)  {

int a, b, c, d;

int (*FPdiv)(int, int);
FPdiv = divide;

a = operation(4, 5, add);
b = operation(9, 1, subtract);
c = operation(10, 10, multiply);
d = operation(32, 8, FPdiv);


printf("Results: %d , %d , %d , %d \n", a, b, c, d);


return 0;
}


//----------------------------Lower definetion part;


int add(int a, int b)  {
return (a+b);
}


int subtract(int a, int b) {
return (a-b);
}


int multiply(int a, int b) {
return (a*b);
}


int divide(int a, int b)  {
return (a/b);
}


int operation(int a, int b, int (*FP)(int, int)) {

return (*FP)(a, b);

}
