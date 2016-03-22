#include <stdio.h>


struct Foo {
int x;
int y;
char str[32];
};

void showStructure(struct Foo bar);

int main(void) {

struct Foo A;

printf("\n");
printf("Enter First integer ---->");
scanf("%d", &A.x);
printf("Enter Second integer --->");
scanf("%d", &A.y);
printf("Enter a word ----------->");
scanf("%s", A.str);

showStructure(A);

return 0;
}


void showStructure(struct Foo bar)  {

printf("\n");
printf("First integer ----> %d \n", bar.x);
printf("Second integer ---> %d \n", bar.y);
printf("String -----------> %s \n", bar.str);
printf("\n");

}
