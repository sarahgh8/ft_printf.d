/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pinkchiwawa <pinkchiwawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:15:30 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/06 11:50:38 by pinkchiwawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_putnbr
{
	int				i;
	unsigned int	nb;
	int				len;
	int				counter;
	unsigned long	n;
}					t_putnbr;

int					ft_putchar(char c);
int					ft_putstr(char *s);
int					ft_putnbr(int a);
int					ft_putnbr_u(unsigned int n);
int					ft_puthex(unsigned long num, char flag);
int					ft_putadd(void *ptr);
int					ft_printf(const char *format, ...);
int					ft_hashtag(unsigned long num, char flag);
int					ft_space(int n, char flag);

#endif
