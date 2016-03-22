#include <stdio.h>
#include <graphics.h>

int main(void) {

int bigX;
int bigY;

bigX = getmaxwidth();
bigY = hetmaxheight();

line(0, 0, bigX, bigY);

setcolor(BLUE);
line(bigX, 0, 0, bigY);

getch();
closegraph();


return 0;

}
