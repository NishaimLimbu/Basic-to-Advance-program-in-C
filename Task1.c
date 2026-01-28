//WAP to find the area and perimeter of circle
#include<stdio.h>
int main(){
float rad, area, perimeter;
printf ("Enter the radius of circle: \t");
scanf ("%f",&rad);

area = (22/7)*rad*rad;
perimeter = 2*(22/7)*rad;

printf ("\n========================\n");
printf ("\nArea of circle is %f\n",area);
printf ("\n========================\n");
printf ("\nPerimeter of circle is %f",perimeter);
printf ("\n========================\n");

return 0;
}
