#include <stdio.h>
#include <string.h>


int main(void) {

char *p = "Cemil Murat DODANLI";

printf("%s \n", p);


for(int t=strlen(p);t>-1;t--) printf("%c", p[t]);

printf("\n");

return 0;
}
