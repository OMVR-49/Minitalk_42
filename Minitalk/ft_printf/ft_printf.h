/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:32:59 by ojebbari          #+#    #+#             */
/*   Updated: 2022/12/18 20:56:25 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <libc.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printing(va_list ap, char c);
int		ft_hex(unsigned int h, const char c);
int		ft_ptr(unsigned long p, char *ptr);
int		ft_printf(const char *str, ...);
int		ft_putnbr_u(unsigned int u);
size_t	ft_strlen(const char *str);
int		ft_len(unsigned int h);
int		ft_putstr(char	*str);
int		ft_putchar(char c);
int		ft_putnbr(long n);
#endif 