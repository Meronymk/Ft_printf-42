/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:14:47 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/27 21:25:02 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(unsigned long address, int *len, char *base)
{
	if (address >= 16)
		ft_puthex((address / 16), len, base);
	write(1, &base[address % 16], 1);
	*len += 1;
}

int	ft_ptr(va_list list)
{
	int				len;
	unsigned long	address;

	address = (unsigned long)va_arg(list, void *);
	len = 2;
	write(1, "0x", 2);
	ft_puthex(address, &len, "0123456789abcdef");
	return (len);
}
