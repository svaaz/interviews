#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct query
{
int a;
int b;
char c;
char pad[3];
};

int main()
{
	unsigned int nrows =0;
	unsigned int len = 0;
	unsigned int count =0;
	char temp[10000];
	int i =0;
	int j =0;
	 
	scanf("%s",&temp);
	
	scanf("%d", &nrows);
	
    struct query *qs = (query *) malloc(nrows * sizeof(struct query));
    
    for(i=0;i<nrows;i++)
    {
    scanf("%d %d %c", &(qs[i].a), &(qs[i].b), &(qs[i].c) );
    }

#if 0    
    for(i=0;i<nrows;i++)
    {
    printf("%d", qs[i].a);
    printf("%d", qs[i].b);
    printf("%c", qs[i].c);
    printf("\n");
    }
#endif    

    for(i=0;i<nrows;i++)
    {
    	count =0;
		for(j = qs[i].a; j<= qs[i].b; j++)
    	{
		if(temp[j] == qs[i].c)
		count ++;	
    	}
    	
    	printf("%d\n", count);
    
	
	}
    
}

