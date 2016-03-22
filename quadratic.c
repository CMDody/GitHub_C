#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//======================

void seperator(void);
double delta(double a, double b, double c);
void reelRoot(double a, double b, double delta);
void complexRoot(double a, double b, double delta);
void singleRoot(double a, double b);

//======================

int main(void) {

double a, b, c;
double dlt;
seperator();
printf("This program solves quadratic equation ax^2 + bx + c = 0 \n");
printf("Enter the value of a ---> ");
scanf("%lf", &a);
printf("Enter the value of b ---> ");
scanf("%lf", &b);
printf("Enter the value of c ---> ");
scanf("%lf", &c);
seperator();

dlt = delta(a, b, c);
printf("Delta = %.3lf \n", dlt);

if(dlt==0) {
printf("Since delta is zero solution is single real root... \n");
singleRoot(a, b);
}
else if(dlt>0) {
printf("Since delta is greater than zero solution is two real roots... \n");
reelRoot(a, b, dlt);
}
else {
printf("Since delta is less than zero solution is two complex roots... \n");
complexRoot(a, b, dlt);
}
seperator();

return 0;
}

//=====================

void seperator(void) {
printf("---------------------------------------------------------------\n");
}

//=====================

double delta(double a, double b, double c) {
return ((b*b)-(4*a*c));
}

//=====================

void reelRoot(double a, double b, double delta) {

double x1, x2;

x1 = ((-b+sqrt(delta))/(2*a));
x2 = ((-b-sqrt(delta))/(2*a));

printf("Real roots are X1 = %.3lf and X2 = %.3lf \n", x1, x2);

}

//=====================

void complexRoot(double a, double b, double delta) {

double com;
double iX;

com = (-b/(2*a));
iX = (sqrt(fabs(delta))/(2*a));

printf("Complex roots are ... \n");
printf("X1 = (%.3lf) + i(%.3lf) \n", com, iX);
printf("X2 = (%.3lf) - i(%.3lf) \n", com, iX);
printf("Where i is square root of -1 \n");

}

//=======================

void singleRoot(double a, double b) {
double x;

x = ((-b)/(2*a));

printf("Single root is... \n");
printf("X = %.3lf \n", x);

}
