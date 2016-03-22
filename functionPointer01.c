#include <stdio.h>
#include <string.h>


void check(char *a, char *b, int (*cmp)(const char *, const char *));

int main(void) {

char st1[32], st2[32];

int (*p)(const char *, const char *);

p = strcmp;

printf("Enter two text --->");
scanf("%s %s", st1, st2);

check(st1, st2, p);

return 0;
}


void check(char *a, char *b, int (*cmp)(const char *, const char *)) {

printf("Comparing two word strings \n");
printf("First word string is ----> %s \n", a);
printf("Second word string is ---> %s \n", b);
if(!(*cmp)(a, b)) printf("Equal \n");
else printf("NOT Equal \n");

}
