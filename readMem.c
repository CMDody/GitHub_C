#include <stdio.h>


int main(void) {

volatile void *mem = (volatile void *) 0x22ccfff3c02d;
unsigned long u;

// hafıza addressinde bulunan verinin bu programmın kontrolü dışında
// değiştirilme ihtimali var ise 'volatile' tipte tanımlamak gerekir.

printf("Pointer address: %p \n", mem);

u = *((unsigned long *) mem);

printf("Value of the memory address: %lu \n", u);


return 0;
}
