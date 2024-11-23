/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:48:02 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/23 16:48:05 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_len(char *p)
{
	int	i;

	i = 0;
	while (p[i])
		i++;
	return (i);
}

int	ft_putadd(unsigned long p)
{
	char	*hex;
	char	buffer[20];
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	if (p == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	while (p > 0)
	{
		buffer[i] = hex[p % 10];
		p /= 10;
		i++;
	}
	write (1, "0x", 2);
	while (i > 0)
	{
		write(1, &buffer[i], 1);
		i--;
	}
	return (ft_len(buffer) + 2);
}
