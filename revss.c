#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
	unsigned int nrows =0;
	unsigned int len = 0;
	unsigned int count =0;
	char temp[1000000];
	int i =0;
	int j =0;
	
	scanf("%d", &nrows);
	
    int **array1 = malloc(nrows * sizeof(char *));
    
    for(i = 0; i < nrows; i++)
    {
 		memset(&temp, 0, 1000000);
 		scanf("%s",&temp);
 		len = strlen(temp);
 		array1[i] = malloc(len * sizeof(char));
 		strcpy(array1[i], temp);
    }
    
    /* do stuff */
    //This is DP ?
    // Brute Force !
    
    for(i = 0; i < nrows; i++)
    {
    count =1;
    len =strlen(array1[j]);
    for(j =0 ;j< len ; j++)
    {
    if(strcmp(array1[j], reverse(array1[j], len-j)) ==0)
    count ++;
    }
    
     printf("%d\n", count);
    //printf("%s\n", array1[i]);
	//free(array1[i]);
	//free the array1 too here after for;
	}
	
	return 0;
	
}

