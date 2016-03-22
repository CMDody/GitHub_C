#include <stdio.h>


int main(int argc, char *argv[]) {

int t;
char c;

for(int i=1;i<argc;++i) {
t = 0;
while((c=argv[i][t]) != 0) {
putchar(c);
t++;
}
putchar('\n');
}


return 0;
}
