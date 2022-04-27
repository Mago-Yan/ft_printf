/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:13:17 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/27 17:24:12 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include "libft.h"

void	ft_puthexa(unsigned long long number, char *base, int *len)
{
	if (number >= 16)
		ft_puthexa(number / 16, base, len);
	write(1, &base[number % 16], 1);
	(*len)++;
}

void	ft_put_p_x(unsigned long long number, int *len, char chr)
{
	char	base[17];

	if (chr == 'p' || chr == 'x')
	{
		if (chr == 'p')
		{
			write(1, "0x", 2);
			(*len) += 2;
		}
		ft_strlcpy(base, "0123456789abcdef", 17);
	}
	if ((chr) == 'X')
		ft_strlcpy(base, "0123456789ABCDEF", 17);
	ft_puthexa(number, base, len);
}
