/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:57:55 by ksaelim           #+#    #+#             */
/*   Updated: 2022/06/21 21:02:18 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	u_intlen(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i++;
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_u(unsigned int nbr)
{
	char	*str;
	int		c;

	c = u_intlen(nbr);
	str = malloc(sizeof(char) * c + 1);
	if (!str)
		return (NULL);
	str[c] = '\0';
	while (--c >= 0)
	{
		str[c] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (str);
}
