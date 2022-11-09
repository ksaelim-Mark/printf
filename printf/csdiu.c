/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csdiu.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:16:39 by ksaelim           #+#    #+#             */
/*   Updated: 2022/06/22 10:17:46 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_s(char *s)
{
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_print_d(int n)
{
	int		size;
	char	*str;

	str = ft_itoa(n);
	size = ft_print_s(str);
	free(str);
	return (size);
}

int	ft_print_u(unsigned int n)
{
	int		size;
	char	*str;

	str = ft_itoa_u(n);
	size = ft_print_s(str);
	free(str);
	return (size);
}
