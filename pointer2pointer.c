#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 6

int main(void) {

char *str[MAX];
int len[MAX];

for(int i=0;i<MAX;i++) {

str[i] = (char *) calloc(8, sizeof(char));
printf("%d ---> ", i);
scanf("%s", str[i]);
len[i] = strlen(str[i]);
}

for(int j=0;j<MAX;j++) printf("%s(%d) ", str[j], len[j]);
putchar('\n');


for(int k=0;k<MAX;k++) free(str[k]);

return 0;
}
