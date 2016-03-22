#include <stdio.h>


int main(void)  {

int i, j;

printf("Enter two numbers (Example: 12 and 24)--->");
scanf("%d %*s %d", &i, &j);

printf("First number: %d \n", i);
printf("Second number: %d \n", j);


return 0;
}
