/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pinkchiwawa <pinkchiwawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:03:48 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/04 15:44:33 by pinkchiwawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_space(int n)
{
	t_putnbr	v1;

	v1.counter = 0;
	if (n > 0)
	{
		ft_putchar(' ');
		v1.counter++;
	}
	v1.counter += ft_putnbr(n);
	return (v1.counter);
}
