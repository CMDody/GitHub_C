#include <stdio.h>
#include <string.h>


int main(void)  {

char str[] = "This is a test text...";
char *p = "Cemil Murat Dodanli";

memmove(str, p, strlen(str));

printf("%s \n", str);
printf("%s \n", p);


return 0;
}
