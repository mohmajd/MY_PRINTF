/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:49:21 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/12/10 19:15:42 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	checkparcent(const char **format, va_list args);
int	ft_upperhex(unsigned int num);
int	ft_lowerhex(unsigned int num);
int	ft_putadd(unsigned long p);
int	ft_putadress(unsigned long p);
int	ft_putchar(char c);
int	ft_putnbr(int i);
int	ft_putparcent(void);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int i);

#endif
