#include <stdio.h>
#include <stdlib.h>

struct s
{
char c;
int i;
double d;
void *p;
int a[0];
}ss;
int main(void)
{
    int *ptr = NULL;
	// (int*) malloc(10);
 struct ss a;
    /* we are calling realloc with size = 0 */
    realloc(ptr, 0);
    printf("sizof struct is %d", sizeof(a));
 
    return 0;
}
