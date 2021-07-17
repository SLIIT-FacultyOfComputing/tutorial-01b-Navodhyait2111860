/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int x, y;
  int sum, average;

  printf("enter the number ");
  scanf("%d",&x);
  printf("enter the number ");
  scanf("%d", &y);

  sum = x + y;
  printf("sum of the numbers %d\n",sum);

 average = sum /2;
 printf("average of the numbers %d", average);
  
  return 0;
}

