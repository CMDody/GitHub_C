#include <stdio.h>
#include <string.h>


int main(void) {

char str1[32];
char str2[16];
char str3[] = "Cemil Murat Dodanli";

int a, b, c;

printf("Enter first string ---> ");
scanf("%s", str1);
printf("Enter second string ---> ");
scanf("%s", str2);


printf("\n-------------------------------------\n");

a = (int) strlen(str1);
b = (int) strlen(str2);

printf("Length of first string ---> %d Characters\n", a);
printf("Length of second string ---> %d Characters\n", b);


if(strchr(str1, 'X')) {
printf("Search character X is exists in first string \n");
}
else {
printf("Search character X does not exists in first string \n");
}

if(strstr(str3, str1)) {
printf("First String: %s is part of %s \n", str1, str3);
}


strcat(str1, str2);
printf("After copying second string to the end of first string ---> ");
printf("%s \n", str1);

return 0;
}
