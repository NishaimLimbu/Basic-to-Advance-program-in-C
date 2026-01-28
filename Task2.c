//WAP to find the TSA, volume and CSA of cylinder

#include<stdio.h>
int main(){
float rad, height, TSA, Volume, CSA;
printf ("Enter the radius of circle of cylinder: \t");
scanf ("%f", &rad);
printf ("Enter the height of circle of cylinder: \t");
scanf ("%f", &height);

TSA = (2*(22/7)*rad*height) + (2*(22/7)*rad*rad);
Volume = (22/7)*rad*rad*height;
CSA = 2*(22/7)*rad*height;

printf ("\n========================\n");
printf ("\n Area of cylinder is %f\n",TSA);
printf ("\n========================\n");
printf ("\n Volume of cylinder is %f\n",Volume);
printf ("\n========================\n");
printf ("\n Perimeter of cylinder is %f\n",CSA);
printf ("\n========================\n");

return 0;
}
