/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:48:28 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/24 01:10:31 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nmblen(int i)
{
	int	j;

	j = 0;
	if (i < 0)
	{
		j++;
		i = -i;
	}
	else if (i == 0)
		j++;
	while (i > 0)
	{
		i /= 10;
		j++;
	}
	return (j);
}

int	ft_putnbr(int i)
{
	int	nb;

	nb = i;
	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
		ft_putnbr(i);
	}
	else if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
	return (ft_nmblen(nb));
}
