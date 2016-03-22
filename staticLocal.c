#include <stdio.h>

int fib(void);   // prototip;

int main(void) {

int i;

for(i=0;i<20;i++) {
printf("Fibbinuachi Number --->%d \n", fib());
}

return 0;
}

int fib(void) {

//Fibbinuachi series;

static int series = 1;

series += series;

return series;
}
