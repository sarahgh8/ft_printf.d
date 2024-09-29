/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:12:50 by sghunmin          #+#    #+#             */
/*   Updated: 2024/09/27 12:12:54 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    t_putnbr v;

    v.i = 0;
    v.counter = 0;
    while (format[v.i])
    {
        if(format[v.i] == '%')
        {
            v.i++;
            if(format[v.i] == '%')
                v.counter += ft_putchr('%');
            if(format[v.i] == 'd' || format[v.i] == 'i')
                v.counter += ft_putnbr(va_arg(args, int));
            if(format[v.i] == 'c')
                v.counter += ft_putchr(va_arg(args, int));
            if (format[v.i] == 's')
                v.counter += ft_putstr(va_arg(args, char *));
            if(format[v.i] == 'x')
                v.counter += ft_puthex(va_arg(args, unsigned int));
            if(format[v.i] == 'X')
                v.counter += ft_puthex_up(va_arg(args, unsigned int));
            if(format[v.i] == 'p')
            {
                 void * ptr = ( void *)va_arg(args, void *);

            



                v.counter += ft_putadd(ptr);
            }
            if(format[v.i] == 'u')
                v.counter += ft_putnbr_u(va_arg(args,unsigned int));
        }
        else
            v.counter += ft_putchr(format[v.i]);
        v.i++;
    }
    va_end(args);
    return (v.counter);
}

// int main()
// {
//     int a = 10;
//     ft_printf("%d\n", ft_printf("Hello"));
//     printf("%d\n", printf("Hello"));
//     ft_printf("%s .. %d .. %i .. %p .. %x .. %X .. %%\n", "sarah", 33, 33, &a, 456, 456);
//     printf("%s .. %d .. %i .. %p .. %x .. %X .. %%\n", "sarah", 33, 33, &a, 456, 456);
//     return (0);
// }

