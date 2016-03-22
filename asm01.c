#include <stdio.h>
#include <stdlib.h>

//==========================

int addOne(int a);

//==========================

int main(void) {

printf("%d \n", addOne(4));

return 0;
}

//==========================

int addOne(int a) {

int val = 0;

asm ("movl %1, %0\n\t"
     "add $1, %0"
     : "=r" (val)
     : "r" (a));

return val;

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
//========================================================================
//
// Eğer programın akışı dışındaki unsurlar tarafından sonucun değişme
// ihtimali var ise, 'volatile' anahtar sözcüğü 'asm' anahtar sözcüğünden
// sonra eklenmelidir.
//------------------------------------------------------------------------- 


