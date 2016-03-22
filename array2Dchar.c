#include <stdio.h>
#include <string.h>

int main(void) {

char c[3][32];
char *p[3];

do {

printf("Enter three words --->");
scanf("%s %s %s",c[0] ,c[1], c[2]);

p[0]=c[0];
p[1]=c[1];
p[2]=c[2];

for(int i=0;i<3;i++) {
printf("%s ", p[i]);
printf("\n");
}

} while(strcmp(c[0], "exit")); 

return 0;
}
