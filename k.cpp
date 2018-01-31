#include<stdio.h>
static int Tstrlen(const char *s)
{
	int len =0;
	if(s==NULL)
	return 0;
	while(*s++)
	len ++;
	return len;
}

int main()
{

printf("%d", Tstrlen("fsdfdsff"));	
}


