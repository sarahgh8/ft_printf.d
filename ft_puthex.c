/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pinkchiwawa <pinkchiwawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:17:14 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/04 14:27:56 by pinkchiwawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long num, char flag)
{
	t_putnbr	v;

	v.counter = 0;
	if (num >= 16)
	{
		v.counter += ft_puthex(num / 16, flag);
		v.counter += ft_puthex(num % 16, flag);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else if (flag == 'x')
			ft_putchar((num - 10 + 'a'));
		else if (flag == 'X')
			ft_putchar((num - 10 + 'A'));
		v.counter++;
	}
	return (v.counter);
}
