#include <stdio.h>
#include <stdlib.h>

int main(void) {

if(!system("ls -Geal")) {
printf("Successfully done! \n");
}
else {
printf("Fault! \n");
}

return 0;
}
