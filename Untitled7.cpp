#include<stdio.h>
#include<stdlib.h>



main() 

{ 

//main();
unsigned data_with_trap = (data & 0xFFFFFF00) |
0xCC;
ptrace(PTRACE_POKETEXT, child_pid, (void*)addr,
(void*)data_with_trap);
 }
