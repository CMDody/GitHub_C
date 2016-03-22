#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===================

typedef union sHasher {
char str[20];
int hsh;
} sHasher;

sHasher hFunc;

//==================

int hashFunction(char *p);

//==================

int main(void) {

char s[20];

printf("Enter a string ---> ");
scanf("%20s", s);
printf("Your hash key: %d \n", hashFunction(s));
printf("Union Value: %d \n", hFunc.hsh);
printf("Length of string: %lu \n", strlen(s));

return 0;
}

//=======================

int hashFunction(char *p) {

int h = 0;
if(p!=NULL) {
snprintf(hFunc.str, 20, "%s", p);
h = hFunc.hsh % strlen(p);
}
return h;

}

//=======================
