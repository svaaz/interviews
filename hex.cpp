#include <stdio.h>
#include <ctype.h>

int main()
{
    const char *src = "0000000000001a000d00";
    char buffer[20];
    char *dst = buffer;
    char *end = buffer + sizeof(buffer);
    unsigned int u;

    while (dst < end && sscanf(src, "%2x", &u) == 1)
    {
        *dst++ = u;
        src += 2;
    }

    for (dst = buffer; dst < end; dst++)
        printf("%d: %c (%d, 0x%02x)\n", dst - buffer,
               (isprint(*dst) ? *dst : '.'), *dst, *dst);

    return(0);
}
