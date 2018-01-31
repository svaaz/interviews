#include<stdio.h>

int move_zeros(int a[], unsigned int size)
{
	int i = 0;
	int j = size-1;
	int temp = 0;
	int count = 0;
	size = size/2 + (size % 2 ? 1 :0) ;
	while(size)
	{
		if(i==j)
		{
		count = j-1;
		printf("\n !!!! %d %d !!!!", i ,j );
		break;
		}
		if(a[i] == 0 && a[j] != 0 )
		{
		
			a[i]=  a[j];
			a[j]= 0;
 			i++;
			j--;
			//count++;
		}
		else if(a[i]==0 && a[j] == 0)
		{
			j--;
		}
		else if(a[i] != 0 && a[j] == 0 )
		{
			i++;
			j--;
   		}
   		else if(a[i]!=0 && a[j] != 0)
		{
			i++;
		}
		

		size--;
	}
	
	return count;
}

void print_array(int a[], int size)
{
	int i =0;
	for(i=0;i<size;i++)
	printf("%d\t", *(a+i));
	printf("\n\n");
}

int main()
{
	
	int a[7]={1,0,2,0,0,3,4};
	print_array(a,7);
	printf("count : %d \n\n", move_zeros(a,7));
	print_array(a,7);
	printf("\n------------------\n");
	int b[7]={0,1,1,1,1,1,1};
	print_array(b,7);
	printf("count : %d \n\n", move_zeros(b,7));
	print_array(b,7);
	printf("\n------------------\n");
	int c[10]={1,0,2,0,3,0,4,0,5,};
	print_array(c,10);
	printf("count : %d \n\n", move_zeros(c,10));
	print_array(c,10);
	printf("\n------------------\n");
	
	int d[20]={1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0};
	print_array(d,20);
	printf("count : %d \n\n", move_zeros(d,20));
	print_array(d,20);
	printf("\n------------------\n");
	
}
