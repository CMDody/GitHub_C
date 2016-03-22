#include <stdio.h>
#include <stdarg.h>

//===========================

double average(int n, ...);

//===========================

int main(void) {

printf("Average of 2, 3, 5, 7, 11, 13, 17, 19 is: %.3lf \n", 
	average(8, 2, 3, 5, 7, 11, 13, 17, 19));

return 0;
}

//==========================

double average(int n, ...) {

va_list vl;
double sum = 0.0;

va_start(vl, n);  // initialize the 'n' number of arguments for 'vl'

for(int i=0;i<n;i++) {
	sum += va_arg(vl, int);
	// for each call of va_arg the next argument will be returned
}

va_end(vl);

return (sum/n);


}
