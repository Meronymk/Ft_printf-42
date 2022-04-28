/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:04:17 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/27 14:01:43 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_transfert(char *x, unsigned int number, long int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (x);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		len;
	unsigned int	numb;

	len = ft_len(n);
	str = ft_calloc((len + 1), sizeof(char));
	if (!(str))
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
	str[0] = '0';
	if (n < 0)
	{
		numb = n * -1;
		str[0] = '-';
	}
	else
	numb = n;
	str = ft_transfert(str, numb, len);
	return (str);
}
