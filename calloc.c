#include <stdio.h>
#include <stdlib.h>


int main(void)  {

char *p;


p = (char *) calloc(16, sizeof(char)); 

// Yukarıdaki komutun eşdeğeri -----> p = (char *) malloc(16 * sizeof(char));
// p = calloc(16, sizeof(char));  // Tip formatlaması C'de zorunlu değildir!
// Tip formatlaması C++ 'da zorunludur
// p = callod(16, 1); // sizeof(char)=1 olduğu için yerine 1 yazılabilir;


printf("Enter a string --->");
scanf("%16s", p);
printf("Your string is ---> %s \n", p);


return 0;

}
