/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:07:05 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/27 21:38:17 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_hex(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static char	*ft_hex_to_str(unsigned int n, int c)
{
	int		size;
	char	*hex;
	char	*base;

		base = "0123456789ABCDEF";
	if (c == 'x')
		base = "0123456789abcdef";
	size = ft_count_hex(n);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (NULL);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size - 1] = base[n % 16];
		n = n / 16;
		size--;
	}
	return (hex);
}

int	ft_hexa(unsigned int nbr, char c)
{
	int		len;
	char	*str;
	char	*base;

	base = "0123456789ABCDEF";
	if (c == 'x')
		base = "0123456789abcdef";
	str = ft_hex_to_str(nbr, c);
	len = ft_putstr(str);
	free(str);
	return (len);
}
