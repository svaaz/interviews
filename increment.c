//Programs from expert C Programming
#include<stdio.h>

int main()
{

int x =0;
int y =0;
int z =0;

z = x+++y;
printf("\n %d ", z);

z =0;
x =0;
y =0;

z = x++ + ++y;//wont compile without space
printf("\n %d ", z);
}
