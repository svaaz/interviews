#include <stdio.h>

int check_if_pow_2(unsigned int num)
{
	if((num & (num-1) )==0)
	printf("%d is Power of 2\n", num);
	else
	;//printf("%d not a power of 2\n", num);

}

int print_pows_of_2(int num)
{
	unsigned int i;
	unsigned int pos;
	while(num)
	{
		i = 0;
		i = i | (1<<pos);
		printf("2 power %d is : %d \n", num, i);
		num --; pos++;
	}
	printf("last one %d", i-1);
}

int main (void)
{
double x = pow (2.0, 3.0);
printf ("Two cubed is %f\n", x);
unsigned int i=0;

for(i=1;i<10000;i++)
check_if_pow_2(i);

print_pows_of_2(32);
return 0;
}
