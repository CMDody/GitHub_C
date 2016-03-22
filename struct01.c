#include <stdio.h>


struct {
int u;
int v;
int w;
} x, y;


int main(void) {

x.u=10;
x.v=(x.w=12, x.w*3);

y.u=7*x.u;
y.v=9*x.v;
y.w=11*x.w;

printf("x.u=%d, x.v=%d, x.w=%d \n", x.u, x.v, x.w);
printf("y.u=%d, y.v=%d, y.w=%d \n", y.u, y.v, y.w);

return 0;
}
