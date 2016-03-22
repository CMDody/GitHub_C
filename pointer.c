#include<stdio.h>

int main() {

int a=32;
int *b;
int c=0;

b=&a;


printf("Value of variable a=%d \n", a);
printf("Value of pointer b=%d \n", *b);

printf("Memory address of a ---> %p \n", &a);
printf("Memory address of b ---> %p \n", b);

a=0;

for(a=0;a<11;a++) {
for(c=0;c<a;c++) {
printf("(%d, %d) ", a, c); 
}
printf("\n");
}


return 0;
}
