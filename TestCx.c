#include <stdio.h>

int main(void) {

int a[] = {1, 3, 5, 7, 11, 13, 17, 19, 23, 27};
int b = sizeof(a)/sizeof(int);

for(int i=0;i<b;i++) {

printf("%02d, ", a[i]);

}

printf("\n");

return 0;
}
