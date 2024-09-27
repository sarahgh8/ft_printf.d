#include "ft_printf.h"
int main ()
{
    int x = printf("%X .. ", -456);
    printf("%d\n", x);
    return (0);
}