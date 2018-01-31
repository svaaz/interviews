#include <stdio.h>
void foo(void)
{
int a;
++a;
printf("%d\n", a);
}
int main(void)
{
foo();
foo();
foo();
int num = 0x12345678;
char* pc = (char*) &num;
for (int i = 0; i < 4; i++) {
printf("%p: %02x \n", pc, (unsigned char) *pc++);
}
}
