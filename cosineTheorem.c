#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

//====================

double lla(double a, double b, double angle);

//====================

int main(void) {

double a, b, angle;

printf("Enter the first length ---> ");
scanf("%lf", &a);

printf("Enter the second length ---> ");
scanf("%lf", &b);

printf("Enter the angle in degrees ---> ");
scanf("%lf", &angle);

printf("Distance: %.3lf \n", lla(a, b, angle));

return 0;
}

//====================

double lla(double a, double b, double angle) {

double result = 0.0;
double rad;

if((a>0) && (b>0) && (angle>0)) {

rad = ((PI/180) * angle);

result = sqrt((a*a) + (b*b) - (2*a*b*cos(rad)));

}

return result;

}
