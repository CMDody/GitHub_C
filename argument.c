#include <stdio.h>


int main(int noa, char** arg) {

for(int i=0;i<noa;i++) {
printf("%d ---> %s \n", i, *arg);
arg++;
}

return 0;
}
