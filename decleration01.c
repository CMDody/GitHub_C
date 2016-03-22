#include <stdio.h>


int main(void)  {

double *dp = (double[]) {1.234, 2.718, 3.14159, 6.022, 7.57, 9.3, 10.3};
double da[] = {[3]=4.5, [0]=1.2, [6]=2.3, [5]=9.8, [1]=6.7, [2]=5.6, [4]=3.2};

for(int i=0;i<6;i++) {
printf("Double floating values: %5.3lg  %5.3lg \n", dp[i], da[i]);
}

return 0;
}
