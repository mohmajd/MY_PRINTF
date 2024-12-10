/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:13:49 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/12/10 18:17:35 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checkparcent(const char **format, va_list args)
{
	int	len;

	len = 0;
	(*format)++;
	if (**format == 'c')
		len = ft_putchar((char)va_arg(args, int));
	else if (**format == 's')
		len = ft_putstr(va_arg (args, char *));
	else if (**format == 'i' || **format == 'd')
		len = ft_putnbr(va_arg (args, int));
	else if (**format == 'p')
		len = ft_putadress((unsigned long)(va_arg (args, void *)));
	else if (**format == '%')
		len = ft_putparcent();
	else if (**format == 'u')
		len = ft_putunbr(va_arg (args, unsigned int));
	else if (**format == 'x')
		len = ft_lowerhex(va_arg (args, unsigned int));
	else if (**format == 'X')
		len = ft_upperhex(va_arg(args, unsigned int));
	(*format)++;
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			len += checkparcent(&format, args);
		else
		{
			write (1, format, 1);
			format++;
			len++;
		}
	}
	va_end(args);
	return (len);
}
