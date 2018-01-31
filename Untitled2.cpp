#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int     emp_id;
    int     name_len;
    char    name[0];
};

main()
{
int c=- -2;
struct employee *e = (struct employee *)malloc(sizeof(*e) + sizeof(char) * 128); 
printf("c=%d",c);
}
