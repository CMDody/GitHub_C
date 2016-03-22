#include <stdio.h>


int main(void) {

double u;

for(u=1;u<10E10;u*=10) {
printf("%e          %G          %lf \n", u, u, u);
}


return 0;
}
