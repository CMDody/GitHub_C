#include <stdio.h>
#include <stdlib.h>

struct person {
char name[32];
char surname[32];
unsigned long int Num;
} ID;

void show(void);
void readFile(char fn[]);


int main(void) {

readFile("Record.dat");
show();

return 0;
}


void show(void)  {

printf("\n");
printf("Name: %s \n", ID.name);
printf("Surname: %s \n", ID.surname);
printf("ID Number: %lud \n", ID.Num);
printf("\n");

}


void readFile(char fn[])  {

FILE *fp;

if((fp = fopen(fn, "rb")) == NULL) {
printf("Unable to read file: %s \n", fn);
exit(1);
}
else {

if(fread(&ID, sizeof(ID), 1, fp) == -1) {
printf("Unable to read file: %s \n", fn);
}

fclose(fp);
}

}
