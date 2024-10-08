/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <sghunmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:17:33 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/08 11:35:15 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadd(void *ptr)
{
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (ft_puthex((void *)ptr, 'x', 0) + 2);
}
// int main ()
// {
//     int a = 10;
//     int x = ft_putadd(&a);
//     ft_putchr('\n');
//     printf("%p", &a);
//     return (0);
// }
