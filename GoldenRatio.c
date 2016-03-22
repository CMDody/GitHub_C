#include <stdio.h>
#include <stdlib.h>

double gr(void);

//------------------

int main(void) {


printf("Golden Ratio is = %lf \n", gr());


return 0;
}

//------------------

double gr(void) {

double A = 100.0;
double B = 100.0;
double C = A+B;

double R1 = A/B;
double R2 = B/C;

while(R1>R2) {

A-=0.001;
B+=0.001;
C=A+B;

R1 = A/B;
R2 = B/C;

}

return R1;

}
