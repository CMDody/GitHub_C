#include <stdio.h>


union myVar {
int i;
float f;
double d;
char ch[32];
};


int main(void) {

union myVar UV;

UV.i = 89;
printf("%d - %f - %lf - %s\n", UV.i, UV.f, UV.d, UV.ch);

UV.f = 3.14159;
printf("%d - %f - %lf - %s\n", UV.i, UV.f, UV.d, UV.ch);

UV.d = 5024850.567;
printf("%d - %f - %lf - %s\n", UV.i, UV.f, UV.d, UV.ch);

printf("Enter a text --->");
scanf("%s", UV.ch);

printf("%d - %f - %lf - %s\n", UV.i, UV.f, UV.d, UV.ch);


return 0;
}

