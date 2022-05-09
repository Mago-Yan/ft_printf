/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:57:54 by pmillan-          #+#    #+#             */
/*   Updated: 2022/05/09 15:12:56 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	ap;

	va_start(ap, s);
	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[++i] == '%')
				ft_put_c('%', &len);
			else
				ft_variables(s[i], ap, &len);
			i++;
		}
		else
			ft_put_c(s[i++], &len);
	}
	va_end(ap);
	return (len);
}

// pruebas main raras:
// si metes unsigned long en printf para convertirlo en hexadecimal,
// te da error porque requiere unsigned int. En el mío no daría error... 
//está mal?
// un puntero es unsigned long o unsigned int?
/*
int main(void)
{
	int				printint;
	int				ft_printint;
	char			*p;
	unsigned int	a = 5;

	p = NULL;
	printf("printf:");
	printint = printf("%s\n", p);
	ft_printf("ft_printf:");
	ft_printint = ft_printf("%s\n", p);
	printf("valor de printf: %d\nvalor de ft_printf: %d", printint, ft_printint);
}*/