#include <stdio.h>  
#include <stdlib.h>


int main(void) {

FILE *fp;
char str[32];

printf("Enter a word --->");
scanf("%30s", str);

if((fp = fopen("Test.txt", "w+")) == NULL) {

printf("File access error \n");
exit(1);
}

fprintf(fp, "%s \n", str);

fclose(fp);



return 0;
}
