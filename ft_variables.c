/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_variables.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:39:19 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/27 17:22:28 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <stdarg.h>

void	ft_variables(char chr, va_list ap, int *len)
{
	if (chr == 'c')
		ft_put_c(va_arg(ap, int), len);
	if (chr == 's')
		ft_put_s(va_arg(ap, char *), len);
	if (chr == 'p')
		ft_put_p_x((unsigned long long)va_arg(ap, void *), len, chr);
	if (chr == 'x' || chr == 'X')
		ft_put_p_x((unsigned int)va_arg(ap, void *), len, chr);
	if (chr == 'd' || chr == 'i')
		ft_put_i_d(va_arg(ap, int), len);
	if (chr == 'u')
		ft_put_u(va_arg(ap, unsigned int), len);
}
