#include <stdio.h>

int main(void)  {

int a;
char str[12];

printf("Enter a number ---> ");
scanf("%d", &a);

printf("Enter a string ---> ");
scanf("%s",str);

printf("%s  ---  %d \n", str, a); 

return 0;
}
