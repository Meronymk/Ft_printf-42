/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:14:47 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/25 14:24:43 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(int list)
{
	int		len;
	void	*ptr;

	ptr = &list;
	len = ft_putstr((char *)ptr);
	return (len);
}
