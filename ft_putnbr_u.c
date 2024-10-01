/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pinkchiwawa <pinkchiwawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:49:39 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/01 15:17:36 by pinkchiwawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	t_putnbr	v;

	v.counter = 0;
	if (n >= 10)
	{
		v.counter += ft_putnbr_u(n / 10);
		v.counter += ft_putnbr_u(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
		v.counter++;
	}
	return (v.counter);
}
