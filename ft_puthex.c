/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:17:14 by sghunmin          #+#    #+#             */
/*   Updated: 2024/09/28 17:17:17 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int	ft_puthex(unsigned long num)
{
	t_putnbr	v;

	v.counter = 0;
	if (num >= 16)
	{
		v.counter += ft_puthex(num / 16);
		v.counter += ft_puthex(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchr((num + '0'));
		else
			ft_putchr((num - 10 + 'a'));
	
		v.counter++;
	}
	return v.counter;
}
#include "ft_printf.h"
#include <stdio.h>


int	ft_puthex_up(unsigned long num)
{
	t_putnbr	v;

	v.counter = 0;
	if (num >= 16)
	{
		v.counter += ft_puthex_up(num / 16);
		v.counter += ft_puthex_up(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchr((num + '0'));
		else
			ft_putchr((num - 10 + 'A'));
	
		v.counter++;
	}
	return v.counter;
}