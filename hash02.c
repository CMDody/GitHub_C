// Date: March 10, 2016
// Day: Thursday
//
// This is a constant size chaining, hash table algorithm
// Hash Function uses the size as the modul of this table
// This algorithm is designed for data normalisation procedures
// This algorithm is designed by Mechanical Eng. (M.Sc.) Cemil Murat Dodanlı
// Commercial use of this algorithm is subjected to legal restrictions
// Only, Health, Science and Academical use of this algorithm is free
//
//__________________________________________________________________________ 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define HASH_SIZE 12
#define STRING_SIZE 32

//==========================
// Data union decleration field;

typedef union sHasher {
char str[STRING_SIZE];
int hsh;
} sHasher;  // for hashFunction();

//==========================
// Data structure decleration field;

typedef struct Node {
char name[STRING_SIZE];
int age;
struct Node *next;
} Node;

typedef struct Bucket {
int key;
Node *value;
} Bucket;

Bucket *hTable;

//==========================
// Global variable decleration field;

int size;
int usage;
int entiry;

//==========================
// Prototype declerations field;

void initialize(void);            // initialize the data structure;
int hashFunction(char *p);        // generates hash key
void finalize(void);              // garbage collection
int finalizeSubNodes(Node *p);    // 
void printHashTable(Bucket *p);   // prints hash table;
void printSubNodes(Node *p);      // prints nodes for printHashTable func.
int recordData(char *n, int a);   // records data to the hash table
void chain(Bucket *b, Node *n);   // chaining the records if necessary
Node *retrieveDatas(int k);       // retrieve all datas which has same key 

//==========================

int main(void) {

char txt[STRING_SIZE];
int hky;

printf("\n");
printf("Static size chaining hashing for data normalisation procedures... \n");

initialize();

recordData("Hasan Dilan", 65);
recordData("Bahar Kiper", 66);
recordData("Cemil Dilan", 29);
recordData("Burak Dodanli", 35);
recordData("Cem Dilan", 62);
recordData("Cemil Murat Dodanli", 37);
recordData("Korhan Koman", 58);
recordData("Katja DodanLoretz", 53);
recordData("Inci Dodanli", 55);
recordData("Nihal Dodanli", 47);
recordData("Gonul Terzi", 34);
recordData("Paul Tarant", 62);
recordData("Joseph Stalin", 68);
recordData("Bob Dylan", 70);
recordData("Adolf Hitler", 71);
recordData("John F. Kennedy", 47);
recordData("Robert F. Kennedy", 41);
recordData("Paul", 59);

printHashTable(hTable);

printf("Enter your data to be retrieved ---> ");
scanf("%s", txt);
hky = hashFunction(txt);
printf("Key:%d ---> ", hky);
printSubNodes(retrieveDatas(hky));

return 0;
}

//==========================

void initialize(void) {

errno = 0;

printf("Initializing hash table... ");

size = HASH_SIZE;
usage = 0;
entiry = 0;

hTable = (Bucket *) calloc(size, sizeof(Bucket));

if(atexit(finalize)!=0) {  // uses function pointer to call...
perror("Finalization register fault!");
}

if(errno == 0) {
printf("Done! \n");
}
else {
printf("Fault while initializing! \n");
printf("Error Number: %d \n", errno);
}

}

//==========================

int hashFunction(char *p) {

int h = 0;
if(p!=NULL) {
sHasher sh;
snprintf(sh.str, STRING_SIZE, "%s", p);
h = sh.hsh % strlen(sh.str);
h %= HASH_SIZE;
}
return h;

}

//==========================

void finalize(void) {

int c = 0;
errno = 0;
printf("Finalizing hash table... ");

if(hTable!=NULL) {
for(int j=0;j<size;j++) {
c += finalizeSubNodes((hTable+j)->value);
}
}

free(hTable);

if(errno == 0) {
printf("Done! \n");
printf("Total %d sub nodes and bucket finalized. \n", c);
}
else {
printf("Fault while finalizing! \n");
printf("Error Number: %d \n", errno);
perror("Garbage Collection Fault!");
}

}

//==========================

int finalizeSubNodes(Node *p) {

int c = 0;
if(p!=NULL) {
if((p->next)) {
c += finalizeSubNodes(p->next);
}
free(p);
c++;
}
return c;
}

//==========================

void printHashTable(Bucket *p) {

if(p==NULL) {
printf("Hash table is empty \n");
}
else {

printf("\n");
printf(" Order |  Key  |  Values   ...  \n");
printf("=======|=======|=================================================");
printf("===========\n");

	for(int i=0;i<HASH_SIZE;i++) {
		printf(" %3d   |", i);
		printf(" %3d   |", (p+i)->key);

		if(((p+i)->value) == NULL) {
			printf("     Empty  \n");
		}
		else {
			printSubNodes((p+i)->value);
		}
	}

printf("\n");

}

}

//==========================

void printSubNodes(Node *p) {

if(p==NULL) {
printf("\n");
}
else {
printf(" [%s, %d]", p->name, p->age);
printSubNodes(p->next); 
}

}

//==========================

int recordData(char *n, int a) {

int k;
k = hashFunction(n);

Node *tmp;
tmp = (Node *) malloc(sizeof(Node));
snprintf(tmp->name, STRING_SIZE, "%s", n);
tmp->age = a;
tmp->next = NULL;

// search for key...
int index = -1;

for(int i=0;i<size;i++) {
if(hTable[i].key == k) index = i;
}

if(index<0) {
// key not found;

int j=0;
while(((hTable[j].value)!=NULL) && (j<HASH_SIZE)) j++; 
// find first empty slot to insert new record

(hTable + j)->key = k;          // or --->>> hTable[j].key=k; 
(hTable + j)->value = tmp;      // or --->>> hTable[j].value=tmp;
// inserting new key and value to the empty slot which has an index 'j'

}
else {
// key found;
chain((hTable + index), tmp);
}

return k;

}

//==========================

void chain(Bucket *b, Node *n) {

if((b->value)==NULL) {
b->value=n;
}
else {

Node *ptr;
ptr = (b->value);

while((ptr->next)!=NULL) 
	ptr = ptr->next;

ptr->next = n;

}

}

//==========================

Node *retrieveDatas(int k) {

int index = -1;

for(int i=0;i<size;i++) {
if(hTable[i].key==k) index=i;
}

if(index<0) {
// key not found
return NULL;
}
else {
// key found
return ((hTable + index)->value);
}

}

//==========================
