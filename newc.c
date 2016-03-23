#include <stdio.h>
#define MAX 11

int main(void) {

printf("This is a test file for GitHub \n");

for(int i=1;i<MAX;i++) {
  
  for(int j=0;j<i;j++) {
    printf("*");  
  }
  printf("\n");
}

return 0;
}
