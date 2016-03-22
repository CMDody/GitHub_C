#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[])  {

char ans;

if(argc<2) {
printf("usage: xerase <filename> \n");
exit(0);
}
else {

printf("Delete file: %s (Y/N) ? ", argv[1]);
ans = getchar();

if(toupper(ans)=='Y') {

printf("Deleting file: %s ... \n", argv[1]);

if(remove(argv[1])) {

printf("Unable to delete file: %s \n", argv[1]);
printf("File not exist or wrong file name... \n");
exit(1);

}

printf("Done. \n");

}
else {

printf("No delete job done... \n");
printf("File: < %s > is still exist...\n", argv[1]);

}


}

return 0;
}
