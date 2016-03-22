#include <stdio.h>
#include <stdlib.h>

// selection sort

void swap(int *a, int *b);
void showDataSet(int u[], int n);
void sort(int *a, int len);

//-------------------------

int main(void) {

int a[] = {30, 0, 26, 4, 22, 8, 18, 12, 14, 16, 10, 20, 6, 24, 2, 28};
int b = (sizeof(a)/sizeof(int));
int c;

printf("Selection Sort Demo........ \n");

printf("Before sorting ---> ");
showDataSet(a, b);

sort(a, b);

printf("After sorting ---> ");
showDataSet(a, b);

return 0;
} 

//------------------------------

void swap(int *a, int *b) {

int u=*a;
int v=*b;

*a=v;
*b=u;

}

//----------------------------

void showDataSet(int u[], int n) {

for(int i=0;i<n;i++) {
printf("%d, ", u[i]);
}
printf("\n");

}

//---------------------------

void sort(int *a, int len) {

for(int i=1;i<len;i++) {
for(int j=0;j<i;j++) {
if((*(a+j))>(*(a+i))) {
swap((a+j), (a+i));
}
}
}

}
