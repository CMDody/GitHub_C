#include <stdio.h> 


int main(void)  {

int i, j, k;
char c[16];

printf("Enter octal and hexadecimal number ---> ");
scanf("%o %x", &i, &j);

printf("Decimal equivalent of these numbers are %d and %d \n", i, j);

printf("\n");
printf("Enter a word ---> ");
scanf(" %c%c%c%9s%n", &c[0], &c[2], &c[4], (c+6), &k);

c[1] = '-';
c[3] = '-';
c[5] = '-';
 
printf("Your text is contains %d characters \n", k);
printf("Your text is ---> %s \n", c);

return 0;
}
