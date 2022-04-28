/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:19:43 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/27 21:03:30 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int		ft_ptr(va_list list);
int		ft_putchar(char c);
int		ft_intdec(int nbr);
int		ft_putstr(char *str);
int		ft_unsigned(unsigned int list);
int		ft_printf(const char *input, ...);
int		ft_hexa(unsigned int list, char c);
int		ft_specifier(va_list list, const char c);

char	*ft_itoa(int n);
char	*ft_strdup(char *str);
int		ft_strlen(char *str);
void	*ft_memset(void *dest, int val, size_t len);
void	*ft_calloc(size_t n, size_t size);

#endif
