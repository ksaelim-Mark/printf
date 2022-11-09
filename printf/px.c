/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   px.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:16:18 by ksaelim           #+#    #+#             */
/*   Updated: 2022/06/22 10:40:20 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *p)
{
	int		size;
	char	*str;

	size = ft_print_s("0x");
	str = base16((unsigned long long int)p, 16);
	size += ft_print_s(str);
	free(str);
	return (size);
}

int	ft_print_x(unsigned int value, char c)
{
	int		size;
	int		i;
	char	*str;

	i = 0;
	str = base16(value, 16);
	if (c == 'X')
	{
		while (str[i] != '\0')
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
	}
	size = ft_print_s(str);
	free(str);
	return (size);
}
