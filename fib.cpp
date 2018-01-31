#include<stdio.h>


int sum_even_fibanocci(unsigned int range)
{
	
	
}

int main()
{
long int n, first = 0, second = 1, next, c;

   printf("Enter the number of terms\n");
   scanf("%ld",&n);

   printf("First %d terms of Fibonacci series are :-\n",n);

   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);
   }

   return 0;
}
