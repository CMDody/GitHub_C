#include <stdio.h>
#include <stdarg.h>

void print_msg(char *format, ...);

int main(void)  {


print_msg("This is a %s %s. \n", "test", "text");

return 0;
}


void print_msg(char *format, ...)  {

va_list ptr;
va_start(ptr, format);

vprintf(format, ptr);

va_end(ptr);

}
