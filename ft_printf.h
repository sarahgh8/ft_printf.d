/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghunmin <sghunmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:15:30 by sghunmin          #+#    #+#             */
/*   Updated: 2024/10/02 10:58:38 by sghunmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
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
int					ft_space(int n);

#endif
