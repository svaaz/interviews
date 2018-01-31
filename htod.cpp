/*
Write a function which converts given hexadecimal number to decimal number.  The function takes as input a hex string (a "char" pointer) and returns a 32 bit integer. Do not use builtin library functions for the conversion.
Error handling:
1) If the input string contains invalid character return -1
2) If the input causes overflow, return -1
0xFF
0x11
'\0'
*/
#include<stdio.h>
#include<string.h>
int htod(char* hex_string)
{

unsigned int result = 0;
unsigned int temp = 0;
unsigned int len = 0;

len = strlen(hex_string);

if(hex_string == NULL)
return -1;

if(len > 10)
return -1;

if(len < 3)
return -1;

if(hex_string[0] != '0' && (hex_string[1] != 'x' || hex_string[1] != 'X' ))
{
printf("\n wrong");
return -1;
}
unsigned int i =0;
unsigned int pos =0;
unsigned int shift =0;


for(i=len-1;i>1;i--)
{

temp = 0;

switch(hex_string[i])
{
case '1':
temp  =1;
 
break;
case '2':
temp = 2;
break;
case '3':
temp = 3;
break;
case '4':
temp = 4;
break;
case '5':
temp = 5;
break;
case '6':
temp = 6;
break;
case '7':
temp = 7;
break;
case '8':
temp = 8;
break;
case '9':
temp = 9;
break;
case 'A':
temp = 10;
break;
case 'B':
temp = 11;
break;
case 'C':
temp = 12;
break;
case 'D':
temp = 13;
break;
case 'E':
temp = 14;
break;
case 'F':
temp = 15;
break;
default:
return -1;
break;
}
shift = (pos*4);
temp = temp << shift;
result = (result | temp);
pos ++;
}


return result;

}

int main()
{
	printf("\n %d", htod("0x22"));
}
