#include <stdio.h>
#include <stdlib.h>

//===================

typedef struct Node {
int data;
struct Node *next;
} Node;

Node *firstNode;

//===================

void addData(int i) { 
// this function add data to the end of the list with loop cycle 

Node *tmp;
tmp = (Node *) malloc(sizeof(Node));
tmp->data = i;
tmp->next = NULL; 

if(firstNode==NULL) { // eğer linkedlist boş ise;
firstNode=tmp;
firstNode->next=NULL;
}
else { // aksi takdirde;

Node *lastNode;
lastNode = firstNode;

while((lastNode->next)!=NULL)
	lastNode = lastNode->next; // en son noda git;

lastNode->next = tmp; // en son noda veriyi koy...

}

}

//========================

void appendData(int i) {
// this function add data to the begining of the list

Node *tmp;
tmp = (Node *) malloc(sizeof(Node));
tmp->data = i;
tmp->next = NULL;

if(firstNode==NULL) { // eğer linkedlist boş ise;
firstNode=tmp;
}
else {
tmp->next = firstNode;
firstNode = tmp;
}

}

//========================

void printList(Node *u) {

if(u==NULL) {
printf("\n");
}
else {

printf("%d, ", u->data);
printList(u->next);      // go to recursion...

}

}

//========================

void finalize(void) {

if(firstNode!=NULL) {

int count = 0;
Node *ptr;
Node *previous;
ptr = firstNode;

while((ptr->next)!=NULL) {
previous = ptr;
ptr = ptr->next;
free(previous);
count++;
}

free(ptr);
count++;

printf("%d Nodes was finalized successfully. \n", count);
}
}


//========================

int main(void) {

printf("Simple Single Linked List Demo ... \n");

addData(3);  // add data to the end of the list...
addData(5);
addData(7);
addData(9);
addData(11);
addData(13);
addData(15);

appendData(21); // add data to the begining of the list...
appendData(0);
appendData(88);
appendData(23);

printList(firstNode);

finalize();

return 0;
}
