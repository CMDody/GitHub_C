#include <stdio.h>

struct cube {
int w;
int h;
int d;
};

int main(void) {

struct cube A;
struct cube *B;  // pointer

B=&A;  // B points A;

A.w=3;  // using dot(.) operator...
A.h=4;
A.d=5;


printf("Cube A: (Uses dot(.) operator) \n");
printf("------------------------------ \n");
printf("Width=%d \n", A.w);
printf("Height=%d \n", A.h);
printf("Depth=%d \n", A.d);
printf("\n");

B->w=20;
B->h=30;
B->d=50;

printf("Cube B: (Uses Arrow(->) operator) \n");
printf("------------------------------ \n");
printf("Width=%d \n", A.w);
printf("Height=%d \n", A.h);
printf("Depth=%d \n", A.d);
printf("\n");

return 0;
}
