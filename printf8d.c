#include <stdio.h>


int main(void)  {


int a;

printf("\n");
printf(" a       a*a       a*a*a    \n");
printf("============================\n");

for(a=1;a<21;a++)  {

printf("%3d - %08d - %8d \n", a, (a*a), (a*a*a));
}


return 0;
}
