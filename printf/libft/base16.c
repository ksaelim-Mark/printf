/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base16.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:17:38 by ksaelim           #+#    #+#             */
/*   Updated: 2022/06/22 02:24:31 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	count(unsigned long long int value, int base)
{
	int	i;

	i = 0;
	while (value >= (unsigned long long int)base)
	{
		value /= base;
		i++;
	}
	return (i);
}

char	*base16(unsigned long long int value, int base)
{
	long long int		size;
	long long int		n;
	char				*str;

	size = count(value, base);
	if (base != 16)
		return (0);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str[size + 1] = '\0';
	while (size >= 0)
	{
		n = value % base;
		if (n >= 10)
			str[size] = n - 10 + 'a';
		else
			str[size] = n + '0';
		value /= base;
		size--;
	}
	return (str);
}
