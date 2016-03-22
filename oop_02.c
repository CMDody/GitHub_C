#include <stdio.h>
#include <stdlib.h>

//====================

struct Object {
int u;
int v;
int (*FP)(int, int);
};

typedef struct Object myClass;

//====================

int add(int a, int b);
void show(struct Object *p);

//====================

int main(void) {

myClass *ob1;
myClass *ob2;
ob1 = (myClass *) malloc(sizeof(myClass));
ob2 = ob1;

ob1->u = 32;
ob1->v = 21;
ob1->FP = add;

printf("\n");
printf("Object_2 = Object_1 \n");
printf("=================== \n");

printf("Object_1 \n");
printf("-------- \n");
show(ob1);
printf("\n");

printf("Object_2 \n");
printf("-------- \n");
show(ob2);
printf("\n");

ob2->v=88;
printf("Object_2.v=88 \n");
printf("============= \n");

printf("Object_1 \n");
printf("-------- \n");
show(ob1);
printf("\n");

printf("Object_2 \n");
printf("-------- \n");
show(ob2);
printf("\n");



free(ob1);
// garbage collection...

return 0;
}

//===================

int add(int a, int b) {
return (a+b);
}

//===================

void show(struct Object *p) {

printf("U = %d \n", p->u);
printf("V = %d \n", p->v);
printf("Function(U, V) = %d \n", p->FP(p->u, p->v));

}

//===================
