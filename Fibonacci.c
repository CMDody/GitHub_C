#include <stdio.h>
#include <stdlib.h>

//------------------------

int Fib(int n);

//------------------------

int main(void) {

for(int u=0;u<21;u++) {

printf("Fibonacci(%d)=%d \n", u, Fib(u));

}

return 0;
}

//------------------------

int Fib(int n) {

if(n<2) { return 1; }
else { return (Fib(n-2) + Fib(n-1));  }

}


