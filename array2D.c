#include <stdio.h>

int main(void) {

int num[10][20];

for(int i=0;i<10;i++) {
for(int j=0;j<20;j++) {
num[i][j]=((2*j)+i);
}
}

for(int u=0;u<10;u++) {
for(int v=0;v<20;v++) {
printf("%2d  ", num[u][v]);
}
printf("\n");
}


return 0;
}
