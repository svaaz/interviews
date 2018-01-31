#include<stdio.h>
int main(void)
{
    int* array = (int*) malloc(10);
    printf("value is %p\n", array);
    array++;
    printf("value is %p\n", array);
   *array = 120000;
    printf("value is %d\n", *array);
    
    return 0;
}
