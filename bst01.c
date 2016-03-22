#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define LENGTH_OF(x) (sizeof(x)/sizeof(x[0]))

//==========================

typedef struct Node {
int data;
int subSize;
struct Node *left;
struct Node *right;
} Node;

Node *root;

//==========================

void initialize(void);             // initialize the BST;
void finalize(void);               // finalize the BST;
int nodeFinalizer(Node *p);        // sub function of finalize() method
int putSubData(int i, Node **p);   // sub function of putData(int i); 
int putData(int i);                // put a new data to the BST
void printPreOrder(Node *p);  // prints pre-order such that root at the left
void printInOrder(Node *p);   // prints In-Order such that root in the middle
void printPostOrder(Node *p); // prints Post-Order such that root at the right
int searchData(int i, Node *p);    // search data and returns path; 
int searchDataPath(int i);         // search data and returns path;
int retrieveData(int i);           // retrieves data from the given path;
int removeData(int i);             // removes data from the given path;
Node *goToNode(int i, Node *p);    // returns Node pointer for the given path;
Node *searchNode(int i, Node *p);  // returns Node pointer for the given data;

//==========================

int main(void) {

initialize();

int pth;
int dataSet[] = {50, 
		25, 75, 
		20, 30, 70, 80, 
		18, 22, 28, 32, 68, 72, 78, 82};
for(int j=0;j<LENGTH_OF(dataSet);j++) {
printf("Data:%d Path:%d \n", 
	dataSet[j], 
	putData(dataSet[j]));
}

printf("Pre-Order  ---> ");
printPreOrder(root); 
printf("\n");

printf("In-Order   ---> ");
printInOrder(root);  
printf("\n");

printf("Post-Order ---> ");
printPostOrder(root);
printf("\n");

printf("Sub size of root node:%d \n", root->subSize);

pth = searchDataPath(78);
printf("Path:%d, Data:%d \n", pth, retrieveData(pth));
printf("Search Node: %d \n", searchNode(70, root)->data);

return 0;
}

//==========================

void initialize(void) {

errno = 0;
printf("Initializing Binary Search Tree... ");

root = NULL;
atexit(finalize);

if(errno == 0) {
printf("Done! \n");
}
else {
printf("Error No: %d \n", errno);
perror("Fault while initializing! \n");
}

}

//==========================

void finalize(void) {

int c = 0;
errno = 0;
printf("Finalizing Binary Search Tree... ");

c = nodeFinalizer(root);

if(errno==0) {
printf("Done! \n");
printf("Total %d nodes were finalized. \n", c);
}
else {
printf("Error No: %d \n", errno);
perror("Fault while finalizing! \n");
}

}

//==========================

int nodeFinalizer(Node *p) {

int c = 0;

if(p!=NULL) {
c += nodeFinalizer(p->right);
c += nodeFinalizer(p->left);
free(p);
c++;
}

return c;
}

//==========================

int putSubData(int i, Node **p) {

int path;

if(*p==NULL) { 
// in the case of node is empty

Node *tmp;
tmp = (Node *) malloc(sizeof(Node));
tmp->data = i;
tmp->subSize = 0;
tmp->right = NULL;
tmp->left = NULL;

*p = tmp;
path = 1;

}
else if(((*p)->data)<=i) { 
// in the case of new data is greater than and equals to node's data

path = putSubData(i, (&(*p)->right));  // go to recursion with right child
path <<= 1;                          // shift all bits 1 left;
path |= 1;

((*p)->subSize)++;	// increase the number of sub elements

}
else if(((*p)->data)>i) {
// in the case of new data is less than to node's data

path = putSubData(i, (&(*p)->left));  // go to recursion with left child;
path <<= 1;                         // shift all bits 1 left
path |= 0;

((*p)->subSize)++;	// increase the number of sub elements 

}


return path;
} 

//==========================

int putData(int i) {
return putSubData(i, &root);
}

//==========================

void printPreOrder(Node *p) {

if(p==NULL) return;
if(p!=NULL) printf("%d, ", p->data);
printPreOrder(p->right);
printPreOrder(p->left);

}

//=========================

void printInOrder(Node *p) {

if(p==NULL) return;

printInOrder(p->left);
if(p!=NULL) printf("%d, ", p->data);
printInOrder(p->right);

}

//==========================

void printPostOrder(Node *p) {

if(p==NULL) return;

printPostOrder(p->left);
printPostOrder(p->right);
if(p!=NULL) printf("%d, ", p->data);

}

//==========================

int searchData(int i, Node *p) {

int path = 0;

if(p) {  // if(p!=NULL)...

if((p->data)==i) { 
path=1;
}
else if((p->data)<i) {
path = searchData(i, p->right);
path <<= 1;
path |= 1;
}
else if((p->data)>i) {
path = searchData(i, p->left);
path <<= 1;
path |= 0;
}

}

return path;

}

//==========================

int searchDataPath(int i) {
	return searchData(i, root);
}

//==========================

int retrieveData(int i) {

int d = 0;
Node *ptr;

if(i>0) {
	ptr = goToNode(i, root);
	d = ptr->data;
}

return d;

}

//==========================

int removeData(int i) {

int val = 0;

	if(i>0) {
		


	}

return val;

}

//===========================

Node *goToNode(int i, Node *p) {

Node *ptr = NULL;

if(p && i>0) {  // if(p!=NULL && i>0) { ....

	if(i==1) {
		ptr=p;
	}
	else if((i&1)==1) {
		ptr=goToNode((i>>1), p->right);
	}
	else if((i&1)==0) {
		ptr=goToNode((i>>1), p->left);
	}

}

return ptr;

}

//==========================

Node *searchNode(int i, Node *p) {

Node *ptr = NULL;

if(p) {  // if(p!=NULL) { ...

	if((p->data)==i) {
		ptr = p;
	}
	else if((p->data)<i) {
		ptr = searchNode(i, p->right);
	}
	else if((p->data)>i) {
		ptr = searchNode(i, p->left);
	}

}

return ptr;

}
