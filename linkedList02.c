// Single Linked List Demo

#include <stdio.h>
#include <stdlib.h>

//========================

typedef struct Node {
int data;
struct Node *next;
} Node;

Node *firstNode;

//========================

void addData(int i);               // add data to the end of the linked list.
void appendData(int i);            // add data to the begining of linked list.
void printList(Node *p);           // prints the linked list.
int getData(int index);            // gets data at the index position.
int searchData(int i);             // search and return the index of element.
// if data is not found in the list returns -1 

void insertData(int index, int i); // insert data to the index position
int changeData(int index, int i);  // returns the old data.
// changes the data with the new data "i" at the index position of the list.

int removeData(int index);        // returns removed data.
// removes the data at the selected index and returns the removed data

void finalize(void);              // garbage collection; 

//=======================

int size = 0;  // size of the linked list...

//=======================

int main(void) {

printf("Single Linked List Demo ... \n");

addData(1);
addData(3);
addData(5);
addData(7);
addData(9);

appendData(45);
appendData(23);
appendData(77);

addData(11);
addData(13);
addData(17);
addData(19);

insertData(10, 51);
insertData(2, 0);
insertData(11, 31);
insertData(6, 66);

printf("\n");

printf("Searching data:%d ---> index:%d \n", 77, searchData(77));
printf("Searching data:%d ---> index:%d \n", 3, searchData(3));
printf("Searching data:%d ---> index:%d \n", 99, searchData(99));
printf("Searching data:%d ---> index:%d \n", 19, searchData(19));
printf("Position:%d, New Data:%d, Old Data:%d \n",
	 6, 
	100, 
	changeData(6, 100));

printf("Size of Linked List: %d \n", size);
printf("Removed data: %d \n", removeData(12));
printf("Size of Linked List after remove operation: %d \n", size);
printList(firstNode);
printf("\n");
printf("Data at the index position %d ---> %d \n", 6, getData(6));
printf("\n");

finalize();

return 0;
}

//======================

void addData(int i) {

Node *tmp;
tmp = (Node *) malloc(sizeof(Node));
tmp->data = i;
tmp->next = NULL;

if(firstNode == NULL) { // eğer liste boş ise...
firstNode = tmp;
}
else { // aksi taktirde liste boş değil ise...

Node *lastNode;
lastNode = firstNode;

while((lastNode->next) != NULL) // En son noda git...
	lastNode = lastNode->next;

lastNode->next = tmp;

}

size++;

}

//==============================

void appendData(int i) {

Node *tmp;
tmp = (Node *) malloc(sizeof(Node));
tmp->data = i;
tmp->next = NULL;

if(firstNode == NULL) { // eğer ilk nod boş ise...
firstNode = tmp;
}
else {
tmp->next = firstNode;
firstNode = tmp;
}

size++;

}

//==============================

void printList(Node *p) {

if(p==NULL) {
printf("\n");  // Liste boş ise...
}
else {
printf("%d, ", p->data);
printList(p->next);
}

}

//============================

int getData(int index) {

if(index<size && index>=0) {

Node *ptr;
ptr = firstNode;

for(int a=0;a<index;a++) // go to index position...
	ptr = ptr->next;

return (ptr->data);

}
else {
return -1;
}

}

//============================

int searchData(int i) {

int Result = -1;

if(firstNode != NULL) {

Node *ptr;
ptr = firstNode;

for(Result = 0;((ptr->data!=i) && ((ptr->next)!=NULL));ptr = ptr->next)
Result++;

if(ptr->data != i) Result = -1;
// en sona gelmesine ragmen data bulunmadıyse -1 gönder
}

return Result;

}

//========================

void insertData(int index, int i) {

if(index<size) {

Node *ptr;
ptr = firstNode;

for(int a=0;a<index;a++) // go to index position 
	ptr = ptr->next;

Node *tmp;
tmp = (Node *) malloc(sizeof(Node));
tmp->data = i;
tmp->next = ptr->next;
ptr->next = tmp;

}

size++;

}

//========================

int changeData(int index, int i) {

if(index<size) {

int oldData;

Node *ptr;
ptr = firstNode;

for(int a=0;a<index;a++) // go to index position... 
	ptr = ptr->next;

oldData = ptr->data;  // get the old data from the list... 
ptr->data = i;       // put the new data to the position

return oldData; // return the old value 
}
else {
return i;
}

}

//=========================

int removeData(int index) {

if(index<size && index>=0) {

int oldData;

Node *ptr;
ptr = firstNode;

for(int a=0;a<index;a++) // go to index position
	ptr = ptr->next;

oldData = ptr->next->data; // get old data;
ptr->next = ptr->next->next; // remove data

size--;

return oldData;
}
else {
return 0;
}

}

//=========================

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

printf("%d Nodes Finalized successfully \n", count);
}

}
