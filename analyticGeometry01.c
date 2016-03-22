#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//=================================================================

double distance(double x1, double y1, double x2, double y2);
double slope(double x1, double y1, double x2, double y2);
double midPointX(double x1, double x2);
double midPointY(double y1, double y2);
void line(double x, double y, double m);
void seperator(void);

//=================================================================

int main(void) {

double x1, y1;
double x2, y2;
double midX, midY;
double dist, s;

seperator();

printf("Enter the coordinates of first point (x, y) ? ---> ");
scanf("%lf, %lf", &x1, &y1);

printf("Enter the coordinates of second point (x, y) ? ---> ");
scanf("%lf, %lf", &x2, &y2);

seperator();

printf("First point (%.3lf, %.3lf) \n", x1, y1);
printf("Second point (%.3lf, %.3lf) \n", x2, y2);

dist = distance(x1, y1, x2, y2);
printf("Distance = %.3lf \n", dist);

s = slope(x1, y1, x2, y2);
printf("Slope = %.3lf \n", s);

midX = midPointX(x1, x2);
midY = midPointY(y1, y2);
printf("Coordinates of mid point is (%.3lf, %.3lf) \n", midX, midY);

seperator();
printf("Line passing from point (%.3lf, %.3lf) to point (%.3lf, %.3lf) \n", 
	x1, 
	y1, 
	x2, 
	y2);
line(x1, y1, s);
seperator();
printf("Line passing from the mid point of previous line \n");
printf("which is perpendicular at the point (%.3lf, %.3lf) \n", midX, midY);
line(midX, midY, (-1/s));
seperator();


return 0;
}

//===============================================================

double distance(double x1, double y1, double x2, double y2) {

return sqrt(pow((y2-y1),2) + pow((x2-x1), 2));

}

//==============================================================

double slope(double x1, double y1, double x2, double y2) {
return ((y2-y1)/(x2-x1));
}

//==============================================================

double midPointX(double x1, double x2) {
return ((x1+x2)/2);
}

//==============================================================

double midPointY(double y1, double y2) {
return ((y1+y2)/2);
}

//==============================================================

void line(double x, double y, double m) {

double n;
double apsis;

n = (y - (m*x));
apsis = ((-n)/m);

printf("Equation of line ---> y = (%.3lf)x + (%.3lf) \n", m, n);
printf("Line intersect the apsis for x = %.3lf \n", apsis);
printf("Line intersect the ordinat for y = %.3lf \n", n);

}

//==============================================================

void seperator(void) {
printf("-----------------------------------------------------------------\n");
}
