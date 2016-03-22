#include <stdio.h>
#include <stdlib.h>

int ack(int m, int n);

int main(void) {

int i, j;

for(i=0;i<4;i++) {
for(j=0;j<11;j++) {

printf(" ack(%d, %d) = %d \n",i ,j, ack(i, j)); 

}
}


return 0;
}


int ack(int m, int n) {

int ans;

if(m==0) { ans=n+1; }
else if(n==0) { ans=ack(m-1, 1); }
else { ans=ack(m-1, ack(m, n-1)); }

return (ans);

}


