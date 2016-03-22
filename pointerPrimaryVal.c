#include <stdio.h>
#include <string.h>


int search(char *p[], char * name);

char *names[] = {
"Herb", 
"Daitel", 
"Dennis", 
"Ken", 
"Marck", 
NULL
};


int main(void) {

printf("\n");

if(search(names, "Dennis"))
printf("Dennis found in the list. \n");

if(!search(names, "Bill")) 
printf("Bill is not in the list. \n");

printf("\n");

return 0;
}


int search(char *p[], char *name) {

int t;

for(t=0;p[t];++t) {
if(!strcmp(p[t], name)) return 1;
}

return 0;
}
