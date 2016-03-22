#include <stdio.h>

static int series = 1;


int fib(void);


int main(void) {

int i;

printf("Fibbinuachi Number --->%d \n", series);

for(i=0;i<20;i++) {

printf("Fibbinuachi Number --->%d \n", fib());

}

return 0;
}


int fib(void) {

series += series;

return series;
}
