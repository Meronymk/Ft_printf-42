/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:21:00 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/27 13:22:30 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(va_list list, const char c)
{
	int	len;

	len = 1;
	if (c == 'c')
		len = ft_putchar(va_arg(list, int));
	else if (c == 's')
		len = ft_putstr(va_arg(list, char *));
	else if (c == 'p')
		len = ft_ptr(va_arg(list, int));
	else if (c == 'd' || c == 'i')
		len = ft_intdec(va_arg(list, int));
	else if (c == 'u')
		len = ft_unsigned(va_arg(list, unsigned int));
	else if (c == 'x' || c == 'X')
		len = ft_hexa(va_arg(list, unsigned int), c);
	else if (c == '%')
		write(1, "%", 1);
	else
	{
		len = 0;
	}
	return (len);
}
