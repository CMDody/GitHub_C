#include <stdio.h>


void funcA(int *a);
void funcB(int b[10]);
void funcC(int c[]);

//...............................................

int main(void) {

int x[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

funcA(x);
funcB(x);
funcC(x);

return 0;
}

//----------------------------------------------

void funcA(int *a) {

for(int i=0;i<10;i++) {
printf("%d, ", *a);
a++;
}

printf("\n");
}

//------------------------------------------------

void funcB(int b[10]) {

for(int i=0;i<10;i++)  {
printf("%d, ", b[i]);
}
printf("\n");
}

//------------------------------------------------

void funcC(int c[]) {

for(int i=0;i<10;i++) {
printf("%d, ", c[i]);
}

printf("\n");
}
