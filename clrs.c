#include<stdio.h>

void max_crossing_sub_array(int a[], int low, int high)
{
int mid = (low+high)/2;

int i =0;
int j =0;
int sum =0;
int left_sum = 0;
int left_max = 0;
int right_sum = 0;
int right_max =0;

for(i=mid;i>low;i--)
{
	sum = sum+a[i];
	if(sum>left_sum)
	{
		left_sum = sum;
		left_max = i;
	}

}
sum =0;
for(j=mid+1;j<high;j++)
{
	sum = sum+a[j];
	if(sum>right_sum)
	{
		right_sum = sum;
		right_max = j;
	}

}

sum = right_sum+left_sum;
	
}



int main()
{
	
	
}


