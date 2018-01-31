#include<stdio.h>
// Convert from ascii hex representation to binary
// Examples;
//   "00" -> 0
//   "2a" -> 42
//   "ff" -> 255
// Case insensitive, 2 characters of input required, no error checking
int hex2bin( const char *s )
{
    int ret=0;
    int i;
    for( i=0; i<2; i++ )
    {
        char c = *s++;
        int n=0;
        if( '0'<=c && c<='9' )
            n = c-'0';
        else if( 'a'<=c && c<='f' )
            n = 10 + c-'a';
        else if( 'A'<=c && c<='F' )
            n = 10 + c-'A';
        ret = n + ret*16;
    }
    return ret;
}

int main()
{
    const char *in = "0000000000001a000d00";
    char out[20];
    int i;

    // Hex to binary conversion loop. For example;
    // If in="0011223344" set out[] to {0x00,0x11,0x22,0x33,0x44}
    for( i=0; i<22; i++ )
    {
        out[i] = hex2bin( in );
        in += 2;
        printf("%c",out[i]);
    }
    
    
    return 0;
}
