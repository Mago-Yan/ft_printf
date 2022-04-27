/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:33:12 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/25 17:34:07 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_u(unsigned int number, int *len)
{
	if (number > 9)
		ft_put_u(number / 10, len);
	ft_put_c(number % 10 + '0', len);
}
