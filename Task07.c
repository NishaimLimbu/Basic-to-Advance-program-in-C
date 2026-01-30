//WAP to find square root and square of number

#include<stdio.h>
#include<math.h>
int main(){

float num, square, squareRoot;

printf("Enter any number : ");
scanf ("%f",&num);

square = num*num;
squareRoot =sqrt(num);

printf ("Square of %f = %f\n", num, square);
printf ("Square root of %f = %f", num, squareRoot);

return 0;
}
