/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:13:12 by sghunmin          #+#    #+#             */
/*   Updated: 2024/09/27 12:13:16 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if(s == NULL)
	{
		return (ft_putstr("(null)"));
	}
	while (s[i])
	{
		ft_putchr(s[i]);
		i++;
	}
	return (i);
}
