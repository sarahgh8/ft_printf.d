/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:16:17 by sghunmin          #+#    #+#             */
/*   Updated: 2024/09/27 12:16:21 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(long n, int len)
{
	len = 0;
	if (n == 0)
	{
		ft_putchr('0');
		return (1);
	}
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	t_putnbr	v;
	int			arr[11];

	v.i = 0;
	if (n < 0)
	{
		ft_putchr('-');
		v.nb = -n;
	}
	else
		v.nb = n;
	while (v.nb > 0)
	{
		arr[v.i++] = v.nb % 10;
		v.nb = v.nb / 10;
	}
	arr[v.i--] = '\0';
	while (v.i >= 0)
		ft_putchr(arr[v.i--] + '0');
	return (num_len(n, v.len));
}

int main()
{
    int x = ft_putnbr(-123);
    ft_putchr('\n');
    int y = ft_putnbr(-2147483648);
    ft_putchr('\n');
    int z = ft_putnbr(0);
    ft_putchr('\n');
    printf("%d .. %d .. %d", x, y, z);
    return (0);
}
