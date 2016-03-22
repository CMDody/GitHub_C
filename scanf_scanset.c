#include <stdio.h>


int main(void)  {

int i, j;
char str[32];


printf("Enter a number and a word --->");
j = scanf("%d %[a-z]", &i, str);

printf("Number: %d  \n", i);
printf("Lower case characters of the word are: %s \n", str);
printf("Total %d types of entery was returned to variables... \n", j);

printf("Enter a word again --->");
scanf("%[^aeiou]%n", str, &i);

printf("The %d. character in the word is the last scaned character.\n", i);
printf("After vowels are filtered ---> %s \n", str);

return 0;
}
