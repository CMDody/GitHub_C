#include <stdio.h>

int main(void)  {

int a;
int c;
double avg = 0.0;
double inp;

printf("How many numbers will be calculated ? ---> ");
scanf("%d", &c);

for(a=1;a<(c+1);a++) {
printf("%d. Number: ---> ",a);
scanf("%lf.2", &inp);
avg += inp;
}

avg /= (double) c;

printf("Average is equals to=%f \n", avg);
printf("Memory address=%p, Size=%lu Bytes \n", &avg, sizeof(avg));

return 0;
}
