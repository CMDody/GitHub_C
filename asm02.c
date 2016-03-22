#include <stdio.h>
#include <stdlib.h>

//=============================

void readTimeStamp(void);

//=============================

int main(void) {

readTimeStamp();

return 0;
}

//=============================

void readTimeStamp(void) {

long long int msr;

  asm volatile ("rdtsc\n\t"             // 'rdtsc' reads the time stamp of CPU
		"shl $32, %%rdx\n\t"
		"or %%rdx, %0"
		: "=a" (msr)
		: 
		: "rdx");

printf("Time since January 01, 1970 midnight in UTC: %lld seconds \n", msr);

}


//-------------------------------------------------------------------------
// Note if function is not returning value
// Or sure of always having same result from the function
// In this case 'volatile' keyword is recommended after 'asm keyword
//
// asm volatile(" .... ");
//
// 'volatile' keyword says the compiler that the results may vary
// out of this programs execution, in other words; the results may
// changed by external program or hardware device
//
//=========================================================================
//
// Eğer programın akışı dışındaki unsurlar tarafından sonucun değişme
// ihtimali var ise, 'volatile' anahtar sözcüğü 'asm' anahtar sözcüğünden
// sonra eklenmelidir.
//-------------------------------------------------------------------------


