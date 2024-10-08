/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <sghunmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:17:14 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/08 11:37:40 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(void *num, char flag, int type)
{
	t_putnbr			v;
	unsigned long long	n;

	if (type == 1)
		n = (unsigned int)(uintptr_t)num;
	else
		n = (unsigned long long)num;
	v.counter = 0;
	if (n >= 16)
	{
		v.counter += ft_puthex((void *)(n / 16), flag, type);
		v.counter += ft_puthex((void *)(n % 16), flag, type);
	}
	else
	{
		if (n <= 9)
			ft_putchar((n + '0'));
		else if (flag == 'x')
			ft_putchar((n - 10 + 'a'));
		else if (flag == 'X')
			ft_putchar((n - 10 + 'A'));
		v.counter++;
	}
	return (v.counter);
}
