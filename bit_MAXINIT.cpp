#include <stdio.h>

int main (void)
{
int i =0;
i = ((unsigned int) -1) >>1;	
printf("Max signed int size : %d\n", i);

unsigned int t =0;
t = ~t;
printf("Max unsigned int size : %u\n", t);

printf("\n %d " , sizeof(int));
}
