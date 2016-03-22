#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct coor {
int x;
int y;
int z;
char str[];    // sadece yapının son öğesi değişken uzunlukta olabilir (C99)
};

int main(void)  {


struct coor *fs;

fs = (struct coor *) malloc(sizeof(struct coor) + 32*sizeof(char));
// son karakter dizisi 32 byte olacak şekilde hafızadan dinamik yer ayarlar;

fs->x=13;
fs->y=19;
fs->z=11;
strcpy(fs->str, "Hello World...");

printf("x=%d \n", fs->x);
printf("y=%d \n", fs->y);
printf("z=%d \n", fs->z);
printf("String: %s \n", fs->str);

return 0;
}

