// Double Linked List Simple Version...

#include <stdio.h>
#include <stdlib.h>

//============================

typedef struct Node {
int data;
struct Node *previous;
struct Node *next;
} Node;

Node *firstNode, *lastNode;

//============================

void addData(int i);     // add data to the end of the list;
void appendData(int i);  // add data to the begining of the list;
void printList(Node *p); // print the list
void finalize(void);     // garbage collection;

//============================

int size = 0;

//============================

int main(void) {

printf("\n");
printf("Double Linked List, Simple Demo ... \n\n");

addData(2);
addData(3);
addData(5);
addData(7);
addData(11);
addData(13);
addData(17);
addData(19);

appendData(1);
appendData(0);
appendData(97);

printList(firstNode);
printf("Size of list: %d \n\n", size);

finalize();

return 0;
}

//============================

void addData(int i) {

Node *tmp;
tmp = (Node *) malloc(sizeof(Node));
tmp->data = i;

if((firstNode == NULL) && (lastNode == NULL)) { // eğer liste boş ise...
tmp->previous=NULL;
tmp->next=NULL;
firstNode=tmp;
lastNode=tmp;
}
else { // aksi tektirde listenin sonuna ekle...
tmp->previous=lastNode;
tmp->next=NULL;
lastNode->next=tmp;
lastNode=tmp;
}

size++;

}

//===========================

void appendData(int i) {

Node *tmp;
tmp = (Node *) malloc(sizeof(Node));
tmp->data = i;

if((firstNode==NULL) && (lastNode==NULL)) { // eğer liste boş ise;
tmp->previous=NULL;
tmp->next=NULL;
firstNode=tmp;
lastNode=tmp;
}
else { // aksi takdirde listenin başına ekle...
tmp->previous=NULL;
tmp->next=firstNode;
firstNode->previous=tmp;
firstNode=tmp;
}

size++;

}

//===========================

void printList(Node *p) {

if(p==NULL) { // eğer liste boş ise;
printf("\n");
}
else {
printf("%d, ", p->data);
printList(p->next);      // recursion...
}

}

//===========================

void finalize(void) {
if((firstNode!=NULL) && (lastNode!=NULL)) {

int count = 0;
Node *frontPtr;
Node *rearPtr;

frontPtr = firstNode;
while((frontPtr->next)!=NULL) {
rearPtr = frontPtr;
frontPtr = frontPtr->next;
free(rearPtr);
count++;
}
free(lastNode); // or free(frontPtr)
count++;

printf("%d node(s) was finalized successfully. \n", count);
}
}

//===========================
