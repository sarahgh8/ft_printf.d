/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_additional_flags_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pinkchiwawa <pinkchiwawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:35:49 by pinkchiwawa       #+#    #+#             */
/*   Updated: 2024/10/07 13:36:06 by pinkchiwawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hashtag(unsigned long num, char flag)
{
	if (num == 0)
		return (ft_putchar('0'));
	if (flag == 'x')
	{
		ft_putstr("0x");
		return (ft_puthex(num, 'x') + 2);
	}
	else if (flag == 'X')
	{
		ft_putstr("0X");
		return (ft_puthex(num, 'X') + 2);
	}
	return (0);
}

static int	ft_space(int n, char flag)
{
	t_putnbr	v1;

	v1.counter = 0;
	if (flag == 'd' || flag == 'i')
	{
		if (n > 0)
		{
			ft_putchar(' ');
			v1.counter++;
		}
		return (ft_putnbr(n));
	}
	else if (flag == 'x' || flag == 'X')
		return (ft_puthex(n, flag));
	return (0);
}

int	check_other_flags(char flag, va_list args, t_putnbr *v, const char *format)
{
	if (flag == '#')
	{
		v->i++;
		return (ft_hashtag(va_arg(args, unsigned long), format[v->i]));
	}
	else if (flag == ' ')
	{
		v->i++;
		return (ft_space(va_arg(args, int), format[v->i]));
	}
	return (0);
}
