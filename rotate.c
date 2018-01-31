#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n =0;
    int i =0;
    int d =0;
    int *a;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d %d",&n,&d);
    a = calloc(sizeof(int)*n,0);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=d;i<n;i++ )
        printf("%d ",a[i]);
    for(i=0;i<d;i++)
        printf("%d ",a[i]);
    
    free(a);
    return 0;
}

