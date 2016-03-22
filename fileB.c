#include <stdio.h>


extern int count;


void display(void)  {

printf("The value of Count=%d \n", count);

}


// This file should be compiled with fileA.c
// cc fileA.c fileB.c


