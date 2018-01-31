#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define MAX 26

int main()
{

char array[]={'0','A','B','C','D','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
const char *digits= "123";

int i =0;

printf("\n strlen %d",strlen(digits));
int len = strlen(digits);
printf("\n ");
unsigned int val = atoi(digits);

printf("int value is : %d \n ", val);


char temp[MAX];
int rem =0;
temp[MAX]='\0';
int j =0;
int reverse = 0;

while (val != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + val%10;
      val = val/10;
   }
int temp_val = reverse;

for(i=1;i<=2;i++)
{
temp_val = reverse;
j =MAX-1;

while(temp_val)
{
	rem = temp_val %(10*i);
	
	temp_val = temp_val /(10*i);
	
	if(rem<=26)
	printf("%c", array[rem]);
	else
	{
	temp_val = temp_val +rem;
	rem = temp_val %(10);
	temp_val = temp_val /(10);
	printf("%c", array[rem]);
	rem = temp_val %(10);
	printf("%c", array[rem]);
	temp_val = temp_val = temp_val /(10);
	}
}

printf("\n");
}
for(i=0;i<len;i++)
{
int index = digits[i]-'0';
printf("%c", array[index]);
}

printf("\n");
}
