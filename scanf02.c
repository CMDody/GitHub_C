#include <stdio.h>

int main(void)  {

char x[16], y[16], z[16];

printf("Enter your full name and surname --->");
scanf("%s %s %s", x, y, z);

printf("First Name ----> %s \n", x);
printf("Middle Name ---> %s \n", y);
printf("Surname -------> %s \n", z);

return 0;

}
