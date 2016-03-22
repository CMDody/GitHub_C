#include <stdio.h>
#include <math.h>

double power(double flow, double h);

int main(void) {

double f, h, p;

printf("Enter the flow rate in cubic meters per second ---> ");
scanf("%lf", &f);
printf("Enter the depth of water reservoir in meters ---> ");
scanf("%lf", &h);

p = power(f, h);
p /= 1000;

printf("Power output of hydroelectric dam is ---> %.3lf kW \n", p);


return 0;
}

double power(double flow, double h) {

double result = 0.0;

if((flow>0) && (h>0)) {
 result = 9.81 * flow * h;
}

return result;

}
