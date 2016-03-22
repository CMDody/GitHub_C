#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define INITIAL_CAPACITY 4

//=====================================

void initialize(void);
void finalize(void);
void push(int data);
int pop(void);
int setVolume(int cap);              // sets volume and returns new capacity
void printStack(void);

//=====================================

int *stack;
int size;
int capacity;

//=====================================

int main(void) {

initialize();

printf("Size:%d, Capacity:%d \n", size, capacity);

push(2);
push(3);
push(5);

printf("Size:%d, Capacity:%d \n", size, capacity);

push(7);
push(11);
push(13);
push(17);
push(19);

printf("Size:%d, Capacity:%d \n", size, capacity);

push(23);
push(29);
push(31);

printf("Size:%d, Capacity:%d \n", size, capacity);

printStack();

printf("Poping ---> ");
for(int j=0;j<5;j++) {
printf("%d, ", pop());
}
printf("\n");

printStack();

printf("Size:%d, Capacity:%d \n", size, capacity);

printf("Poping ---> ");
while(size>0) {
printf("%d, ", pop());
}
printf("\n");

printStack();

push(51);
push(49);
push(37);
push(31);

printStack();

push(23);

printStack();
printf("Size:%d, Capacity:%d \n", size, capacity);

return 0;
}

//=====================================

void initialize(void) {

errno = 0;
printf("Initializing memory for stack data... ");

size = 0;
capacity = INITIAL_CAPACITY;

stack = (int *) calloc(capacity, sizeof(int));

if(stack) {
atexit(finalize);
	if(errno==0) {
		printf("Done! \n"); 
	}
	else {
		printf("Error Number: %d \n", errno);
		perror("Fault while reserving memory ");
		exit(1);
	}
}
else {
printf("Not enough memory! \n");
exit(1);
}

}

//======================================

void finalize(void) {

errno = 0;
printf("Finalizing data stack... ");

free(stack);


if(errno==0) {
	printf("Done! \n");
}
else {
	printf("Error Number: %d \n", errno);
	perror("Fault while releasing reserved memory fields ");
	exit(1);
}


}

//======================================

void push(int data) {

	if(size<capacity) {
		stack[size] = data;
		size++;
	}
	else {
		capacity = setVolume(capacity * 2);
		push(data);
	}

}

//======================================

int pop(void) {

int data = 0;
int subCap = ((capacity/2)-1);

if(size>0) {
size--;
data = stack[size];
stack[size] = 0;
}

if((size<subCap) && (capacity>INITIAL_CAPACITY)) {
capacity = setVolume(capacity/2);
}

return data;
}

//======================================

int setVolume(int cap) {

stack = (int *) realloc(stack, (cap * sizeof(int)));

if(!stack) {
printf("Fault while reallocating memory reservation! \n");
exit(1);
}

return cap;

}

//=======================================

void printStack(void) {

for(int i=0;i<capacity;i++) {
	if(i<size) {
		printf("%d, ", *(stack+i));
	}
	else {
		printf("X, ");
	}

}
printf("\n");

}
