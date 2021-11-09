#include "../inc/libmx.h" 
void *mx_memset(void *b, int c, size_t len)
{
    if (c >= 10)
    {
        size_t i = 0;
        unsigned char *d = b;
        while (i <= len)
        {

            d[i] = c;
            i++;
        }
        return d;
    }

    if (c <= 10)
    {
        size_t i = 0;
        unsigned int *d = b;
        while (i <= len)
        {

            d[i] = c;
            i++;
        }
        return d;
    }
}
