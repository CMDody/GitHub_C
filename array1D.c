#include <stdio.h>

int main(void) {

int a[20];

int *p;

p=a; // Pointer assignment of array no need for & operator;

for(int i=0;i<20;i++) a[i]=(2*i);

for(int j=0;j<20;j++) printf("%d \n", a[j]);

printf("---------------\n");

for(int k=0;k<20;k++) {
printf("%d \n", *p);
p++;
}


return 0;
}
