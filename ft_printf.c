/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <sghunmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:12:50 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/08 11:34:20 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list args, char flag, t_putnbr *v, const char *format)
{
	if (flag == 'd' || flag == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (flag == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (flag == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (flag == 'x' || flag == 'X')
		return (ft_puthex(va_arg(args, void *), flag, 1));
	if (flag == 'p')
		return (ft_putadd((void *)va_arg(args, void *)));
	if (flag == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int)));
	if (flag == '%')
		return (ft_putchar('%'));
	if (format[v->i] == '#' || format[v->i] == ' ')
	{
		v->i++;
		while(format[v->i] == '#' || format[v->i] == ' ')
			v->i++;
		return (check_other_flags(format[--v->i], args, v, format));
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	t_putnbr	v;

	va_start(args, format);
	v.i = 0;
	v.counter = 0;
	while (format[v.i])
	{
		if (format[v.i] == '%')
		{
			v.i++;
			v.counter += ft_check(args, format[v.i], &v, format);
		}
		else
			v.counter += ft_putchar(format[v.i]);
		v.i++;
	}
	va_end(args);
	return (v.counter);
}

// int	main(void)
// {
// 	ft_printf("% d%d\n", -42, 4);
// 	printf("%+d %d\n", -42, 4);
// 	return (0);
// }