#include <stdio.h>
#define MAX 3


struct person {
char nom[32];
char prenom[32];
int age;
};

int main(void) {

int i, j;
struct person Worker[MAX];

printf("Enter 3 workers personal data... \n");

for(i=0;i<MAX;++i) {

printf("Worker No: %d \n", (i+1));
printf("Enter Name ------> ");
scanf("%s", Worker[i].nom);
printf("Enter Surname ---> ");
scanf("%s", Worker[i].prenom);
printf("Enter Age -------> ");
scanf("%d", &Worker[i].age);

}

printf("---------------------------------------\n");

for(j=0;j<MAX;++j) {

printf("Worker No: %d \n", (j+1));
printf("Worker Name: %s \n", Worker[j].nom);
printf("Worker Surneame: %s \n", Worker[j].prenom);
printf("Worker Age: %d \n", Worker[j].age);
printf("\n");

}


return 0;
}
