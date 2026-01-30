//WAP to convert temperature Celsius to Fahrenheit and Celsius to Kelvin

#include<stdio.h>
int main(){

float celsius, fahrenheit;

printf ("Enter temperature in Celsius : ");
scanf ("%f", &celsius);

printf ("\nTemperature in Fahrenheit : %f", (celsius * (9/5)) + 32);

printf ("\nTemperature in Kelvin : %f", celsius + 273.15);

return 0;
}
