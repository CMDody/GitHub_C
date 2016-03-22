#include <stdio.h>


struct coor {
int x;
int y;
int z;
char str[];    // sadece yapının son öğesi değişken uzunlukta olabilir (C99)
} ob={.x=9, .y=13, .z=19, .str="Hello World..."};
// Yapılara ilk değer atama sadece C99 ve sonraki versiyonlarda geçerlidir.

int main(void)  {

printf("x=%d \n", ob.x);
printf("y=%d \n", ob.y);
printf("z=%d \n", ob.z);
printf("String: %s \n", ob.str);

return 0;
}

