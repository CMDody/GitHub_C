#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

FILE *fp;

void openFile(char fn[]);
void seekRead(void);

int main(void) {

char str[32];
char fname[32];
int i, j, k;

printf("Enter the file name to read ---> ");
scanf("%31s", fname);

openFile(fname);

seekRead();

fclose(fp);

return 0;
}

//------------------------------

void openFile(char fn[])  {

if((fp = fopen(fn, "r+")) == NULL) {

printf("\n");
printf("Unable to open file: %s \n", fn);
exit(1);

}

}

//---------------------------------

void seekRead(void)  {

int i = 0;
int pos;
int choice;
char ch;
char str[32];

do {
i++;
printf("\n");
printf("Operation No: %d \n", i);
printf("Actual position of file: %ld \n", ftell(fp));
printf("1. Read string from file; \n");
printf("2. Set new position in file; \n");
printf("3. Quit \n");
printf("-------------------------------\n");
printf("Enter your choice ---> ");

ch = getchar();

switch(ch) {

case '1':

printf("\n");
fgets(str, 30, fp);
str[31] = '\0';
printf("String is: %s \n", str);
if(feof(fp)) {
printf("EOF: End Of File \n");
}
printf("\n");

break;


case '2':

printf("Enter position ---> ");
scanf("%d", &pos);

fseek(fp, pos, 0);

break;

case '3':
 
fclose(fp);
exit(0);

break;

}

ch = '\0';

} while(choice != '3');


}
