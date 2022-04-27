/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:07:05 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/25 13:59:36 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexalen(unsigned long list)
{
	int	len;

	len = 0;
	while (list >= 16)
	{
		list /= 16;
		len++;
	}
	return (len);
}

int	ft_hexa(unsigned int list, char c)
{
	unsigned long	lst;
	char			*hexabase;
	int				len;
	int				i;

	hexabase = "0123456789abcdef";
	len = 0;
	i = 0;
	lst = list;
	if (c == 'X')
		hexabase = "0123456789ABCDEF";
	if (lst >= 16)
	{
		ft_hexa((lst / 16), c);
		ft_hexa((lst % 16), c);
	}
	else
		write(1, &hexabase[lst], 1);
	return (ft_hexalen(list));
}
