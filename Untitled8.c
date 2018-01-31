#include <stdio.h>
#include <stdlib.h>

struct s
{
char c;
int i;
double d;
void *p;
int a[0];
};

int main(void)
{
    int *ptr = NULL;
    int aaa;
	// (int*) malloc(10);
 struct s a;
    /* we are calling realloc with size = 0 */
    realloc(ptr, 0);
    printf("sizof struct is %d", sizeof(ptr));
 
    return 0;
}
