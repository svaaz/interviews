#include<stdio.h>
#include<string.h>

/* find the element that is not repeated , other elements are repeated once.*/

/* In a given array every number has a single duplicate, 
but only one number has single copy. 

How do u find out that number in O(n) w/o extra space
Ans: Xor all elements */

int main()
{
	unsigned int x[10] = {1,2,3,4,1,2,3,4,6};
	unsigned int i;
	unsigned int val =0;
	
	for(i=0;i<9;i++)
	val ^= x[i];
	
	printf("%d", val);
}
