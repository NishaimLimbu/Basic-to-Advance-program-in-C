//WAP to find price of n Banana given the price of a dozen Banana

#include<stdio.h>
int main(){

float pricedozen, price;
int number;

printf ("Enter the Price of Dozen of Banana : ");
scanf ("%f", &pricedozen);
printf ("Enter the number of Banana you Bought : ");
scanf ("%d", &number);

price = pricedozen/12 * number;

printf ("The price of %d Banana is rs.%f", number, price);

return 0;
}
