#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n =0;
    int t =0;
    int i =0;
    int l =0;
    unsigned long long answer[1000];
    unsigned int temp;
    unsigned long long a[20];
   	unsigned long long b[4];
   memset(&answer, 0 , 1000*sizeof(long long));
   memset(&a, 0 , 20*sizeof(long long));
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d", &t);
    
     
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        int j = 0;
        temp = 0;
        int k =0;
        int count =0;
        
        memset(&a, 0, 20*sizeof(long long));
        
        for(j=0;j<n-1;j++)
        {
            
            scanf("%d", &temp);
            printf("temp = %d\n", temp);  
				  
		 	count++;
		 	
			if(a[k]==0)           
            a[k]+=temp;
            else
            a[k]*=temp;
             
            if(count == 5)
         	{
         		 printf("%llu \t", a[k]);
				 count = 0;
         		a[k] = a[k]%1234567;
         		 printf("%llu \t\n", a[k]);
         		k++;
			}
			
			
        }
        
        
        if(count)
        {
        a[k] = a[k] %1234567;
        k++;
        }
       printf("k:%d count :%d \n", k, count); 
       
        count =0;
        l=0;
        memset(&b, 0 , 4*sizeof(long long));
        while(k--)
        {
        
        printf("%llu \t",a[k]);
        count++;
        
        if(b[l]==0)
		b[l] +=(a[k]);
		else
		b[l] *=(a[k]); 
		
		if(count == 5)
		{
         	count = 0;
         	b[l] = b[l]%1234567;
         	l++;
		}
       }
       if(count)
       {
	   b[l] = b[l]%1234567;
	   l++;
	   }
        printf("\n");
        printf("l:%d count :%d \n", l, count); 
        while(l--)
        {
        	printf("b[l] : %llu \t", b[l]);
        	
        if(answer[i]==0)
		answer[i] +=(b[l]);
		else
        answer[i]*=(b[l]);
    	}
        
		answer[i]%=1234567;
        
    }
    for(i=0;i<t;i++)
        printf("%llu\n", answer[i]);
    
    return 0;
}
