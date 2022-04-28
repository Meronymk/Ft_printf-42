/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:14:43 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/27 16:17:33 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	list;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(list, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			len += ft_specifier(list, input[i + 1]);
			i++;
		}
		else
			len += ft_putchar(input[i]);
		i++;
	}
	va_end(list);
	return (len);
}
