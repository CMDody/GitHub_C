#include <stdio.h>

void func(int a[][20]);


//-------------------------------

int main(void) {

int c[10][20];

for(int i=0;i<10;i++)  {
for(int j=0;j<20;j++)  {
c[i][j] = ((2*j) + i);
}
}

func(c);

return 0;
}



//-------------------------------

void func(int a[][20]) {

for(int i=0;i<10;i++) {
for(int j=0;j<20;j++) {

printf("%2d  ", a[i][j]);

}
printf("\n");
}

}
