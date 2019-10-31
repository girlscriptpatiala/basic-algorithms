# C Language
//This program swaps two numbers with the help of third variable.
#include<stdio.h>

void main()
{
 float a,b,t;
 printf("\nSwapping two numbers using third variable:->");
 printf("\nEnter first number:");
 scanf("%f",&a);
 printf("\nEnter second number:");
 scanf("%f",&b);

 t=a;
 a=b;
 b=t;

 printf("\nAfter swapping...");
 printf("\n\nFirst number:%f",a);
 printf("\nSecond number:%f",b);
}
