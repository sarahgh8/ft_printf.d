/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:15:30 by sghunmin          #+#    #+#             */
/*   Updated: 2024/09/27 12:15:33 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
#include <stdarg.h>

typedef struct s_putnbr
{
	int				i;
	unsigned int	nb;
	int				len;
	int 			counter;
	unsigned long 	n;
}					t_putnbr;

int					ft_putchr(char c);
int					ft_putstr(char *s);
int					ft_putnbr(int a);
int	ft_putnbr_u(unsigned int n);

int	ft_puthex_up(unsigned long n);
int	ft_puthex(unsigned long n);
int ft_putadd(void * ptr);
int	ft_printf(const char *format, ...);


#endif
