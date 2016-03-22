#include <stdio.h>
#include <stdlib.h>

int main(void) {

int dataSet[] = {10, 12, 23, 34, 45, 56, 67, 78, 89, 90};

int len = sizeof(dataSet)/sizeof(int);

printf("Array contains %d elements \n", len);

printf("Array ---> ");

for(int i=0;i<len;i++) {
printf("%d, ", dataSet[i]);
}
printf("\n");

return 0;
}
