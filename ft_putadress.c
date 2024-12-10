/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:48:02 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/24 01:41:36 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(unsigned long p)
{
	char	*hex;
	char	buffer[20];
	int		i;
	int		nb;

	i = 0;
	hex = "0123456789abcdef";
	if (p == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	while (p > 0)
	{
		buffer[i] = hex[p % 16];
		p /= 16;
		i++;
	}
	nb = i;
	write (1, "0x", 2);
	while (i > 0)
		write(1, &buffer[--i], 1);
	return (nb + 2);
}
