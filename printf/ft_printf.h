/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:45:54 by ksaelim           #+#    #+#             */
/*   Updated: 2022/06/19 21:27:35 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_print_c(int c);
int		ft_print_s(char *s);
int		ft_print_p(void *p);
int		ft_print_d(int n);
int		ft_print_u(unsigned int n);
int		ft_print_x(unsigned int n, char s);
char	*base16(unsigned long long int value, int base);

#endif
