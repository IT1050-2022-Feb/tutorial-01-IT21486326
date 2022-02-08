/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

int main() 
{
   int a, b;
   float sum=0, avg=0;
   
   printf("Enter mark 01: " );
   scanf("%d", &a);
   
   printf("Enter mark 02: ");
   scanf("%d", &b);
           
   sum = a + b;
   avg = sum / 2;
   
   printf("Average = %.2f", avg);        
  
  return 0;
}


