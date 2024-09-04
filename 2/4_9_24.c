//write a program to take 2 number as input and print the 1.sum 2.difference 3.product 4.ratio
#include <stdio.h>
int main()
{
float a,b;
printf("enter two numbers");
scanf("%f%f",&a,&b);
printf("sum of two numbers is %f",a+b);
printf("difference of two numbers is %f",a-b);
printf("multiplication of two numbers is %f",a*b);
printf("ratio of two numbers is %f",a/b);
return 0;
}
