/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:37:39 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/27 12:18:07 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intdec(int list)
{
	int		len;
	char	*print;

	print = ft_itoa(list);
	len = ft_putstr(print);
	free(print);
	return (len);
}
