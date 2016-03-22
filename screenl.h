#include <stdio.h>

//=============================================

extern void clearScreenToEnd(void);
extern void setCursorLocation(int row, int col);

//=============================================

extern void clearScreenToEnd(void) {
printf("\033[2J");  // Clear the screen than move cursor to the end;
}

//=============================================

extern void setCursorLocation(int row, int col) {
printf("\033[%d;%dH", row, col); // Move cursor to (10,20)
}

//=============================================
