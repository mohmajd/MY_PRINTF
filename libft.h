/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:49:21 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/23 17:02:35 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	checkparcent(const char **format, va_list args);
int	ft_upperhex(int num);
int	ft_putadd(unsigned long p);
int	ft_putaddess(unsigned long p);
int	ft_putchar(char c);
int	ft_putnbr(int i);
int	ft_putparcent(void);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int i);

#endif
