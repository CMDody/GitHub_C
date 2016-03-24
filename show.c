#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void) {

errno = 0;

if(!system("ls -Geal")) {
printf("Successfully done! \n");
}
else {
printf("Fault! \n");
}

if(errno==0) {
printf("No error occured while execution! \n");
}
else {
printf("Error Number:%d \n", errno);
}

return 0;
}
