/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pinkchiwawa <pinkchiwawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:49:39 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/04 15:08:49 by pinkchiwawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	t_putnbr	v;

	v.counter = 0;
	if (n < 0)
	{
		ft_putchar('-');
		v.nb = -n;
		v.counter++;
	}
	else
		v.nb = n;
	if (v.nb >= 10)
	{
		v.counter += ft_putnbr(v.nb / 10);
		v.counter += ft_putnbr(v.nb % 10);
	}
	else
	{
		ft_putchar(v.nb + '0');
		v.counter++;
	}
	return (v.counter);
}
