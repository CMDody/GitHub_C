#include <stdio.h>

long fact(long a);

int main(void) {

long u;

printf("Enter a number for factorial calculation --->");
scanf("%ld", &u);

printf("Factorial of %ld! = %ld \n", u, fact(u)); 

return 0;
}


long fact(long a) {

if(a<=1) {
return 1;
}
else {
return (a * fact(a-1));
}

}
