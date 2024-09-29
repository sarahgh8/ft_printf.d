#include "ft_printf.h"
#include <limits.h>





int main()
{
    int a = 10;
    // // ft_printf("hellow");

    printf(" %p %p %p \n", LONG_MIN, LONG_MAX, &a);
    ft_printf(" %p %p %p \n", LONG_MIN, LONG_MAX, &a);




    // ft_printf("%d\n", ft_printf("Hello"));
    // printf("%d\n", printf("Hello"));
    // ft_printf("%s .. %d .. %i .. %p .. %x .. %X .. %%\n", "sarah", 33, 33, &a, 456, 456);
    // printf("%s .. %d .. %i .. %p .. %x .. %X .. %%\n", "sarah", 33, 33, &a, 456, 456);
    return (0);
}