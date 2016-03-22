// Double Linked List...

#include <stdio.h>
#include <stdlib.h>

//============================

typedef struct Node {
int data;
struct Node *previous;
struct Node *next;
} Node;

Node *firstNode, *lastNode;
Node *cursor;

//============================

void addData(int i);       // add data to the end of the list;
void appendData(int i);    // add data to the begining of the list;
void printList(Node *p);   // print the list;
void setCursor(int index); // move cursor to the index position; 
int getData(void);         // returns data from the cursor;
int changeData(int i);     // changes data of cursor and returns old data;
int removeData(void);      // removes data of cursor and returns old data;
void finalize(void);       // garbage collection

//============================

int size = 0;

//============================

int main(void) {

printf("\n");
printf("Double Linked List Demo ... \n\n");

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

printf("Get data: %d \n", getData());
// without setting the position of cursor with setCursor() function
// getData() function returns the first added data to the list...

setCursor(6);
printf("Get data from the 6th. index position: %d \n", getData());

setCursor(0);
printf("Get data from the 0 index position: %d \n", getData());

setCursor(7);
printf("Data changed at the index position: 7 \n");
printf("Old data: %d, New data: %d \n", changeData(31), 31);

printList(firstNode);

printf("Removing data at the cursor position: 7 \n");
printf("Removed data: %d \n", removeData());
printList(firstNode);

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

cursor=firstNode; // set cursor;

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

cursor=firstNode; // set cursor...

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

void setCursor(int index) {

cursor=firstNode;

if((index<size) && (index>0)) {

for(int a=0;(a<index) && (cursor!=lastNode);a++) 
	// move cursor to the indexed position
	cursor=cursor->next;

}

}

//===========================

int getData(void) {
return (cursor->data);
}

//===========================

int changeData(int i) {

if((firstNode!=NULL) && (lastNode!=NULL)) {

int oldData;

oldData = (cursor->data);
cursor->data = i;

return oldData;

}
else {
return i;
}

}

//===========================

int removeData(void) {

if((firstNode!=NULL) && (lastNode!=NULL)) {

int oldData;

Node *tmp;
tmp = cursor;
oldData = cursor->data;

if(cursor==firstNode) { // cursor ilk nod ise
cursor = cursor->next;
cursor->previous = NULL;
firstNode = cursor;
free(tmp);
}
else if(cursor==lastNode) { // cursor son nod ise;
cursor = cursor->previous;
cursor->next = NULL;
lastNode = cursor;
free(tmp);
}
else { // cursor ortada bir yerde ise;

Node *before;
Node *after;

before = cursor->previous;
after = cursor->next;

before->next = after;
after->previous = before;

free(tmp);
}

size--;
return oldData;

}
else {
return 0;
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

//==========================


