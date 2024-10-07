/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pinkchiwawa <pinkchiwawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:13:03 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/07 21:53:01 by pinkchiwawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	if(c == '\0')
		return (ft_putstr("(nil)"));
	write(1, &c, 1);
	return (1);
}
