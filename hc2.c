#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  char string[1000]={0};
  char key[500]={0};
  int x =0;
  unsigned int u;
  char *k = key;
  
  scanf("%s", &string);
  scanf("%x", &key);
  
  char * str = string;
  
  while(str && k)
  {
  	sscanf(k, "%2x", &u);  	
    *str=*str^u;
    printf("%c",*str);
    k += 2;
    str++;
  }
  
  
  
  return 0;
}
