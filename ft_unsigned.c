/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:57:54 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/25 14:09:06 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int list)
{
	unsigned int	lst;
	int				len;

	len = 0;
	lst = list;
	if (lst > 9)
	{
		ft_unsigned(lst / 10);
		ft_unsigned(lst % 10);
	}
	else
		len = ft_putchar(lst + 48);
	return (len);
}
