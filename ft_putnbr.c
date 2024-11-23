/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:48:28 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/23 16:48:30 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
	if (i == "-2147483648")
		write(1, "-2147483648", 11);
	else if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
	else if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		write(1, &i, 1);
	return (ft_nmblen(i));
}
