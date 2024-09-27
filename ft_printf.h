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

typedef struct s_putnbr
{
	int				i;
	unsigned int	nb;
	int				len;
	int 			counter;
}					t_putnbr;

int					ft_putchr(char c);
int					ft_putstr(char *s);

#endif
