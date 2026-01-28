//WAP to find the simple interest

#include<stdio.h>
int main(){

float principle, time, rate, SI;

printf ("Enter Principle, Time and Rate: \t");
scanf ("%f,%f,%f",&principle, &time, &rate); //enter each data separated with comma ','//

SI = (principle*time*rate)/100;

printf("Simple Interest : %f\t", SI);

return 0;
}
