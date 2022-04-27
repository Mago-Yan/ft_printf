/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:46:22 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/27 17:28:48 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_s(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
	{	
		write(1, "(null)", 6);
		(*len) += 6;
	}
	else
	{
		while (str[i])
		{
			ft_put_c(str[i], len);
			i++;
		}
	}
}
