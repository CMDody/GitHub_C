#include <stdio.h>
#include <stdlib.h>

//------------------------------

struct person {
char name[32];
char surname[32];
unsigned long int Num;
} ID;

//-----------------------------

void getData(void);
void writeFile(char fn[]);

//-----------------------------

int main(void) {

getData();
writeFile("Record.dat");

return 0;
}

//-----------------------------


void getData(void)  {

ID.name[0] = '\0';
ID.surname[0] = '\0';
ID.Num = 0;

printf("\n");

printf("Enter your name --->");
scanf("%30s", ID.name);

printf("Enter your surname --->");
scanf("%30s", ID.surname);

printf("Enter your ID Number --->");
scanf("%lud", &ID.Num);

printf("\n");

}

//----------------------------

void writeFile(char fn[])  {

FILE *fp;

if((fp = fopen(fn, "wb")) == NULL) {
printf("Unable to create file: %s \n", fn);
exit(1);
}
else {

if(fwrite(&ID, sizeof(ID), 1, fp) == -1) {
printf("Unable to write file: %s \n", fn);
}

fclose(fp);
}

printf("Data successfully written to file: %s \n", fn);
printf("\n");

}
