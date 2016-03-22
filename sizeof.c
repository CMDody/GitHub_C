#include <stdio.h>

int main(void)  {

int a = 12;
float f = 2.718;
double d = 52100.123;
char c = 'Q';

printf("Size of Intiger type = %lu Bytes \n", sizeof(int));
printf("Size of Intiger variable = %lu Bytes \n", sizeof(a));
printf("Size of Float type = %lu Bytes \n", sizeof(float));
printf("Size of Float variable = %lu Bytes \n", sizeof(f));
printf("Size of Double float type = %lu Bytes \n", sizeof(double));
printf("Size of Double float variable = %lu Bytes \n", sizeof(d));
printf("Size of Character type = %lu Bytes \n", sizeof(char));
printf("Size of Character Variable = %lu Byte \n", sizeof(c));

return 0;
}
