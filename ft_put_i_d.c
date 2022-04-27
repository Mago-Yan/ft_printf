/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:50:54 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/25 16:58:04 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_i_d(long int number, int *len)
{
	if (number < 0)
	{
		ft_put_c('-', len);
		number *= -1;
	}
	if (number > 9)
		ft_put_i_d(number / 10, len);
	ft_put_c(number % 10 + '0', len);
}
