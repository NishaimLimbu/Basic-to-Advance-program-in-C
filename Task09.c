// WAP to find the are between concentric circle

#include<stdio.h>
#define PI 3.1416
int main(){

float Rad, rad, Ar, ar, area;

printf ("Enter radius of outer circle : ");
scanf ("%f",&Rad);
printf ("\nEnter radius of inner circle : ");
scanf ("%f",&rad);

Ar = PI * Rad * Rad;
ar = PI * rad * rad;
area = Ar - ar;

printf ("\nThe area between concentric circle with radius %f and %f is %f", Rad, rad, area);

return 0;
}
