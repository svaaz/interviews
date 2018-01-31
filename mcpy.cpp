#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void my_memmove(void* dest, const void* src, size_t size)
{
    unsigned int i;

    char* d = (char*)dest;
    char* s = (char*)src;

    if( s > d )
    {
            for( i = 0; s[i] && i < size; ++i )
                    d[i] = s[i];
    }
    else
         for (i = 0; i != size; ++i)
    			d[size - i - 1] = s[size - i - 1];
}

void *memove(void *dest, void *src, size_t n)
{
	
	char *d =(char *)dest;
	char *s =(char *)src;
	
	if(s == d)
		return dest;
	
	if(s < d) 
	{
	//copy from back
	s=s+n-1;
	d=d+n-1;
	while(n--)
	{
	*d-- = *s--;
	}
	}
	else 
	{
	//copy from front
	while(n--)
	*d++=*s++;
	}
	
	return dest;
} 

int main()
{
    char my_str[20] = "abcdefghijklmn";

    char str[20] = "abcdefghijikl";

    my_memmove(my_str+8, my_str, 4);
//memcpy(my_str+8, my_str, 4);
    //memove(str+1, str, 4);
    
	printf("%p %p\n", my_str, str);
    printf("%s %s\n", my_str, str);

    return 0;
}
