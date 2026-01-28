//WAP to do simple arithmetic problem of two number

#include<stdio.h>
int main(){
float a,b;
printf("Enter first number \t");
scanf ("%f",&a);

printf("Enter Second number \t");
scanf ("%f",&b);

printf ("\n %f + %f = %f", a,b,a+b);
printf ("\n %f - %f = %f", a,b,a-b);
printf ("\n %f * %f = %f", a,b,a*b);
printf ("\n %f / %f = %f", a,b,a/b);

return 0;
}

