#include <stdio.h>
#include <math.h>

double tempFP(double time) {

double result = 0.0;

if(time>0) {

result = ((4*(time*time))/(time+2))-20;

}

return result;

}

//=======================

int hours(double val) {
return floor(val);
}

//=======================

int minutes(double val) {

int hour = floor(val);
double subDecimal = (val - ((double) hour));
subDecimal *= 60;

return floor(subDecimal);

}


//=======================

int main(void) {

double Temp[2][40];
int c = 0;
for(double t=0.25;t<10.25;t+=0.25) {
Temp[0][c] = t;
Temp[1][c] = tempFP(t);
c++;
}

printf(" No.  |    Freeze Time                      Temperature         \n");
printf("----------------------------------------------------------------\n");
for(int i=0;i<40;i++) {
printf(" %02d   |   %02d hours,  %02d minutes       %3.3lf degrees Celsius \n",
	i ,
	hours(Temp[0][i]), 
	minutes(Temp[0][i]), 
	Temp[1][i]);

}

return 0;
}
