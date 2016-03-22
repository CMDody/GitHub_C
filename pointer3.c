#include <stdio.h>
#include <string.h>

int main(void) {

int a[32];
int *p;
int sum;

p=a;  // p=&a[0]; 

for(int i=0;i<32;i++) a[i]=((2*i)+1);

for(int j=0;j<32;j++) {
printf("%d, ", a[j]);
if(((j+1)%8)==0) printf("\n");
}

printf("\n");

for(sum=*a, p=a+1;p<a+32;p++) sum+=*p;
// (OR)--->  for(sum=a[0], int k=1;k<32;k++) sum += a[k];   
// (OR)--->  for(sum=*a, int k=1;k<32;k++) sum += *(a + k);

printf("Sum of odd numbers is %d \n", sum);

printf("\n");
return 0;
}
