/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:49:02 by mohmajdo          #+#    #+#             */
/*   Updated: 2024/11/23 16:49:03 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_upperhex(int num)
{
	char	*hex;
	char	*buffer;
	int		i;

	i = 0;
	hex = "0123456789ABCDEF";
	if (num == 0)
	{
		write (1, &num, 1);
		return (1);
	}
	buffer = malloc(ft_len(num));
	while (num > 0)
	{
		buffer[i] = hex[num % 16];
		num /= 16;
		i++;
	}
	while (i > 0)
	{
		write(1, &buffer[i], 1);
		i--;
	}
	free (buffer);
	return (ft_len(num));
}
