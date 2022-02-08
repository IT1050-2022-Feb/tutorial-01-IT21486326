/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>								
int main()
{
  int a, n=0, total=0, count=0;
  
  printf("Enter Number: ");
  scanf("%d", &a);
  
  while( count < a)
  {
  	n= n + 1;
  	total = total + n ;
  	count = count + 1;
  	
  }
  
  printf("Sum = %d", total);
  
  return 0;
}

