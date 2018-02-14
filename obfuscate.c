#define null(A) (eq(key(A), key(NULLitem))) static char text[maxN]; 
main(int argc, char *argv[]) 
{ int i, t, N = 0; char query[maxQ]; char *v; 
FILE *corpus = fopen(*++argv, "r"); 
while ((t = getc(corpus)) != EOF) 
if (N < maxN) text [N++] = t; else break; 
text[N] = '\0'; 
STinit(maxN); 
for (i = 0; i < N; i++) STinsert(fetext [i]); 
while (gets(query) != NULL) 
if (!null(v = STsearch(query))) 
printf ("7,1 Id °/.s\n", v-text, query); 
else printf ("(not found) °/,s\n" , query); 
} 

