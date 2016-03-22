
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void crToNull(char *s);


int main(void)  {

char st[32];

printf("Enter a string --->");
fgets(st, 31, stdin);

crToNull(st);

printf("String: %s \n", st);


return 0;
}

//--------------------------------

void crToNull(char *s) {

int len;

len = strlen(s);

if(s[len - 1] == '\n') {

s[len - 1] = '\0';

}


}
