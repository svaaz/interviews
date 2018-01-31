#include <stdio.h>

int mult(int n, size_t size, unsigned char *data) {
    int carry = 0;
    for (int i = 0; i < size; i++) {
        int result = data[i] * n + carry;
        data[i] = result % 100;
        carry = (result - data[i]) / 100;
    }
    return carry != 0;
}

FILE *fpIn;


void print(size_t size, unsigned char *data) {
	
    int first = 1;
    for (int i = 0; i < size; i++) {
        int d = data[size - i - 1];
        if (first && d == 0) continue;
       
        
        printf("%0*d", first && d < 10 ? 1 : 2, d);
        fprintf(fpIn, "0*%d", first && d < 10 ? 1 : 2, d);
      	fprintf(fpIn, "\n");
        first = 0;
       
    }
     
}

int main(int argc, char*argv[]) {
	fpIn = fopen("fib-array.txt", "wb");
    for (int fact = 1; fact <= 200; fact++) {
        unsigned char data[1000] = {1};
        for (int i = 1; i <= fact; i++) {
            if (mult(i, sizeof(data), data)) {
                return 1;
            }
        }
        
        printf("%d! = ", fact);
        fprintf(fpIn,"%d! = ", fact);
        print(sizeof(data), data);
        printf("\n");
    }
    return 0;
    fclose(fpIn);
}
