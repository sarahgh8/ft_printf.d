/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <sghunmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:03:48 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/02 10:04:14 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_space(int n)
{
	t_putnbr	v;

	v.counter = 0;
	if (n > 0)
	{
		ft_putchar(' ');
		v.counter++;
	}
	v.counter += ft_putnbr(n);
	return (v.counter);
}
