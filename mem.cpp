#include <stdio.h>
  int global_a;
  int function1(int arg_a, int *parg_b)
  {
  static int static_c;
  *parg_b = static_c;
  int local_d = arg_a + 1;
  return local_d;
  }
  int main(int argc, char *argc[])
  {
  int local_a, local_b, local_c;
  printf ("Enter a number:");
  scanf("%d",&amp;local_a);
  local_b = function1(local_a, &amp;local_c);

  printf ("The function1 churned a few hunderd cycles "
  "of instructions and found that %d+1 is %d\n"
  "The last time, this function1 was called with "
  "an input of %d\nHope you find it useful\n",
  local_a, local_b, local_c);

  return 0;
  }

