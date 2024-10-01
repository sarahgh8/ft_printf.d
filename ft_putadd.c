/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pinkchiwawa <pinkchiwawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:17:33 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/01 15:11:37 by pinkchiwawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadd(void *ptr)
{
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (ft_puthex((unsigned long)ptr, 'x') + 2);
}
// int main ()
// {
//     int a = 10;
//     int x = ft_putadd(&a);
//     ft_putchr('\n');
//     printf("%p", &a);
//     return (0);
// }
