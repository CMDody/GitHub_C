
#include <stdio.h>
#include <stdlib.h>


int main(void)  {

char *p;

p = (char *) malloc(16 * sizeof(char));  // Ayrıntılı yazımı

// p = malloc(16 * sizeof(char)); // Tip formatlaması C'de şart değildir!
// Ancak Tip formatlaması C++ için zorunludur!
// p = malloc(16);  // sizeof(char)=1 olduğu için ihmal edilebilir!

printf("Enter a string ---> ");
scanf("%16s", p);


printf("Your string is ---> %s \n", p);


return 0;

}
