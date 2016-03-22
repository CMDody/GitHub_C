#include <stdio.h>


int main(void)  {

int i = 96500;
float f = 3.14159;
double d = 6.022E23;
char str[] = "This is a test text";



printf("%8.4d \n", i); 
// en az 8 karakterlik alana, en az 4 basamak basılacak;
// boş kalan karakter alanı boşluk ile doldurulacak;

printf("%.9d \n", i); 
// en az 9 basamak basılacak, eksik ise başına 0 konularak doldurulacak; 

printf("%5.2f \n", f); 
// en az 5 karakter basılacak, noktadan sonra 2 hane basılacak;

printf("%.6f \n", f);  
// noktadan sonra 6 hane görüntelenecek;

printf("%060lf \n", d);
// en az 60 karakterlik alana basılacak, eksik ise 0 ile doldurulacak;

printf("%10.4lE \n", d);
// en az 10 karakter basılacak, noktadan sonraki 4 hane gösterilecek;
// boş kalan karakter alanın başına boşluk konulacak;

printf("%12.6lG \n", d); 
// en az 12 karakter basılacak, noktadan sonraki 6 hane gösterilecek; 
// boş kalan karakter alanın başına boşluk konulacak;

printf("%s \n", str);
printf("%4.8s \n", str); 
// en az 4 karakter, en fazla 8 karakter basılacak; 


return 0;
}
