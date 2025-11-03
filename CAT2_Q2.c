/*
*/
#include<stdio.h>
int main() {

float hours, rate;
float grosspay, tax , netpay;

// Take user inputs
printf("enter the hours worked in a week:");
scanf("%f", & hours);
printf("Enter wage per hour:");
scanf("%f",& rate);

//calculate gross pay
if (hours <=600)
 tax= grosspay *0.15;
 else
 tax= ( 600 * 0.15)+((grosspay-600)*0.20);
 // calculate net pay
 netpay=grosspay - tax;
 //Display results 
 printf("%.2f,tax\n");
 printf("%.2f, netpay\n");

return 0;
}