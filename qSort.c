#include <stdio.h>
#include <stdlib.h>

#define LENGTH_OF(x) ((sizeof(x))/(sizeof(x[0])))

void showdataset(int *p, int sz);
void swap(int *a, int *b);
void partition(int *p, int left, int right);
void qSort(int *p, int sz);

//...

int main(void) {

int a[] = {12, 9, 14, 8, 22, 7, 24, 6, 11, 15, 0, 45, 6, 40, 5, 55};

printf("Data set before qSort operation... \n");
showdataset(a, LENGTH_OF(a));

qSort(a, LENGTH_OF(a));

printf("Data set after qSort operation... \n");
showdataset(a, LENGTH_OF(a));


return 0;
}

//==============================

void showdataset(int *p, int sz) {

for(int i=0;i<sz;i++) {
printf("%d, ", *(p+i));
}

printf("\n");

}

//=============================

void swap(int *a, int *b) {

int u = *a;
int v = *b;

*a = v;
*b = u;

}

//=============================

void partition(int *p, int left, int right) {

int i = left;
int j = right;
int pivot = ((left + right)/2);

do {

while((p[i]<p[pivot]) && (i<right)) i++;
while((p[j]>p[pivot]) && (j>left)) j--;

if(i<=j) {
swap((p+i), (p+j));
i++;
j--;
}

} while(i<=j);

if(i<right) partition(p, i, right);
if(j>left) partition(p, left, j);

}

//=============================

void qSort(int *p, int sz) {

partition(p, 0, (sz-1));

}
