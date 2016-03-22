#include <stdio.h>

struct oop {
int a;
int b;
int (*add)(int, int);
};

//=========================

typedef struct oop myClass;

//...

int Topla(int a, int b);

//=========================

int main(void) {

myClass ob1;
ob1.a = 12;
ob1.b = 56;
ob1.add = Topla;

printf("Object1 ---> a=%d \n", ob1.a);
printf("Object1 ---> b=%d \n", ob1.b);
printf("Object1 ---> add(a, b)=%d \n", ob1.add(ob1.a, ob1.b));

return 0;
}

//==========================

int Topla(int a, int b) {
return (a+b);
}

//==========================
