#include "ft_printf.h"

int ft_space(int n)
{
    t_putnbr    v;

    v.counter = 0;
    if(n > 0)
    {
        ft_putchar(' ');
        v.counter++;
    }
    v.counter += ft_putnbr(n);
    return (v.counter);
}