/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:04:17 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/27 12:03:09 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	ft_leninput(long input)
// {
// 	size_t	len;
// 	int		isnegative;

// 	len = 0;
// 	isnegative = 0;
// 	if (input < 0)
// 	{
// 		len++;
// 		isnegative++;
// 		input = -input;
// 	}
// 	while (input >= 1)
// 	{
// 		len++;
// 		input /= 10;
// 	}
// 	return (len);
// }

// static char	*ft_mallocinput(char *c, long input, int len, int isnegative)
// {
// 	if (input != 0)
// 		c = malloc(sizeof(char) * (len + 1));
// 	else
// 		return (c = ft_strdup("0"));
// 	if (!c)
// 		return (0);
// 	isnegative = 0;
// 	if (input < 0)
// 	{
// 		isnegative++;
// 		input = -input;
// 	}
// 	c[len] = '\0';
// 	while (--len >= 0)
// 	{
// 		c[len] = (input % 10) + '0';
// 		input /= 10;
// 	}
// 	if (isnegative == 1)
// 		c[0] = '-';
// 	else
// 		c[0] = (input % 10) + '0';
// 	return (c);
// }

// // Converts the param int to a char.
// char	*ft_itoa(int n)
// {
// 	int		len;
// 	char	*newchar;
// 	long	input;
// 	int		isnegative;

// 	input = n;
// 	len = ft_leninput(input);
// 	newchar = 0;
// 	isnegative = 0;
// 	newchar = ft_mallocinput(newchar, input, len, isnegative);
// 	if (newchar == NULL)
// 		return (0);
// 	return (newchar);
// }

static char *ft_transfert(char *x, unsigned int number, long int len)
{
    while (number > 0)
    {
        x[len--] = 48 + (number % 10);
        number = number / 10;
    }
    return (x);
}
static long int ft_len(int n)
{
    int len;
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
char    *ft_itoa(int n)
{
    char            *str;
    long int        len;
    unsigned int    numb;
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
