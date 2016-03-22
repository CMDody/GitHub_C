#include <stdio.h>


void swap(int *a, int *b);


int main(void) {

int i = 12;
int j = 36;

printf("The value of i=%d and j=%d before calling by reference. \n", i, j);

swap(&i, &j);

printf("The value of i=%d and j=%d after calling by reference. \n", i, j);

return 0;
}


void swap(int *a, int *b) {

int temp;
temp=*a;
*a=*b;
*b=temp;

}
