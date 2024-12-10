/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:49:55 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/24 01:12:12 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ulen(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_putunbr(unsigned int i)
{
	if (i > 9)
	{
		ft_putunbr(i / 10);
		ft_putunbr(i % 10);
	}
	else
		ft_putchar(i + '0');
	return (ft_ulen(i));
}
