#include <stdio.h>
#include <stdlib.h>
#include<string.h>


static void reverse(char *str, unsigned int len)
{
	int i=0;
	char temp;
	int j =len-1;
	
		
	for(i=0;i<(len/2);i++)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
	}

}
int main()
{
	
	char s[200] = "hello sir! how are you enjoy !!! Welcome! "; 
	int len =strlen(s);
	int len_sofar =0;
	reverse(s, len);
	s[len]=' ';
	printf("%s\n" , s);
	
	int i =0;
	
	for(i=0;i<len;i++)
	{	
		len_sofar++;
	
		if(s[i] ==' ' || i==len-1)
		{
		reverse(&s[i-len_sofar], len_sofar+1);
		len_sofar=0;		
		}
	}
	printf("%s\n" , s);
}
