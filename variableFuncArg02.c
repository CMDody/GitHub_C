#include <stdio.h>
#include <stdarg.h>

//===========================

void printArgs(int n, ...);

//===========================

int main(void) {

printArgs(2, 3, 5, 7, 11, 13, 17, 19, 23, 27, 31, -1);
printArgs(1, 0, -1);
printArgs(10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -2);

return 0;
}

//==========================

void printArgs(int n, ...) {

va_list vl;
int i;

va_start(vl, n);  // initialize the 'n' number of arguments for 'vl'

for(i=n ; i>=0 ; i=va_arg(vl, int)) {

	printf("%d, ", i);
	// prints all the arguments until the arguments are less than zero
}

va_end(vl);

printf("\n");


}
