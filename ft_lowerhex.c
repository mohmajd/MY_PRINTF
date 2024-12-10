/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:47:30 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/24 01:34:02 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lent(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_lowerhex(unsigned int num)
{
	char			*hex;
	char			buffer[20];
	int				i;
	unsigned int	nb;

	i = 0;
	nb = num;
	hex = "0123456789abcdef";
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (num > 0)
	{
		buffer[i++] = hex[num % 16];
		num /= 16;
	}
	while (i > 0)
		write(1, &buffer[--i], 1);
	return (ft_lent(nb));
}
