#include <stdio.h>


int main(void)  {

printf("%x  %#x \n", 30, 30);
printf("%X  %#X \n", 31, 31);

printf("%*.*f \n", 10, 2, 3.14159);
// Yukarıdaki komut aşağıdaki ile aynıdır...
// printf("%10.2f \n", 3.14159); 

return 0;
}
