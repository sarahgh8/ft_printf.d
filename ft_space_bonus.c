/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pinkchiwawa <pinkchiwawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:03:48 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/06 12:10:19 by pinkchiwawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_space(int n, char flag)
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
