/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <sghunmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:15:30 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/08 11:36:04 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
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
int					ft_puthex(void *num, char flag, int type);
int					ft_putadd(void *ptr);
int					ft_printf(const char *format, ...);
int					check_other_flags(char flag, va_list args, t_putnbr *v,
						const char *format);

#endif
