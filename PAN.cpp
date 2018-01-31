#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	char a[10][10] ;
	int n =0;
	int i =0;
	int j =0;
	int flag =0;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	scanf("%s", &a[i]);
	
	for(i=0;i<n;i++)
	{
		int len = 10;
		flag =1;
		
		
		for(j=0;j<5&&flag;j++)
		{
			if(!isupper(a[i][j]))
			{
			printf("NO\n");
			flag =0;
			break;
			}
		}
		for(j=5;j<9&&flag;j++)
		{
			if(!isdigit(a[i][j]) )
			{
			printf("NO\n");
			flag =0;
			break;
			}
			
		}
		
		if((!isupper(a[i][len-1]))&&flag)
		{
		printf("NO\n");
		flag =0;
		break;
		}
		
		if(flag)
		printf("YES\n");
	}
	
    return 0;
}
