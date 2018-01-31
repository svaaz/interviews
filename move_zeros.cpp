#include<stdio.h>

int move_zeros(int *a, unsigned int size)
{
	int i = 0;
	int j = size;
	int temp = 0;
	
	for(i=0;i<size;i++)
	{
		if(a[j] != 0 && a[i] == 0)
		{
			temp =a[j];
			a[j]=a[i];
			a[i] = temp;
			i++;
			j++;
			count++;
		}
		else if(a[i]==0 && a[j] == 0)
		{
			j++;
		}
		else if(a[i]!=0 && a[j] != 0)
		{
			i++;
		}
	}
	
	return count;
}

void print_array(int *a, int size)
{
	int i =0;
	for(i=0;)
	
}

int main()
{
	
	int a[7]={1,0,2,0,0,3,4};
	

}
