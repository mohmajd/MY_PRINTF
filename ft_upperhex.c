/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:49:02 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/24 01:36:30 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int n)
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

int	ft_upperhex(unsigned int num)
{
	char			*hex;
	char			buffer[20];
	int				i;
	unsigned int	nb;

	i = 0;
	nb = num;
	hex = "0123456789ABCDEF";
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (num > 0)
	{
		buffer[i] = hex[num % 16];
		num /= 16;
		i++;
	}
	while (i > 0)
		write(1, &buffer[--i], 1);
	return (ft_len(nb));
}
