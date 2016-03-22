#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)  {

char s[8];
char *p;


// p = (char *) malloc(8 * sizeof(char));
// p = malloc(8 * sizeof(char));  // Tip formatlaması C'de zorunlu değildir!

p = malloc(8);  // sizeof(char)=1 olduğu için kısaca böyle yazılabilir.

printf("Enter the two words ---> ");
scanf("%8s %8s", p, s);
printf("Your First Word is ---> %s \n", p);
printf("Your Second Word is ---> %s \n", s);

printf("Enlarging the first string with realloc ... ");

p = realloc(p, 16);

printf("Done!... \n");

printf("New size of the string is 16 characters \n");
printf("Now appending the second string to the end of first string... \n");
strcat(p, s);
printf("The new value of first string is ---> %s \n", p);
printf("The new value of second string is ---> %s \n", s);


return 0;
}
