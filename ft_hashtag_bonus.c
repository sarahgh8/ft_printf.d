/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashtag_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <sghunmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 08:48:27 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/02 08:48:31 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hashtag(unsigned long num, char flag)
{
	if (num == 0)
		return (0);
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
