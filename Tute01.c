/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
float subject1,subject2,average=0;

 printf("\nInput marks of subject1 :");
 scanf("%f",&subject1);

 printf("Input marks of subject2 :");
 scanf("%f",&subject2);

 average=(subject1+subject2)/2.0;

 printf("Average = %.2f",average);

  return 0;
}

