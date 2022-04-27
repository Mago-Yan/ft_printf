/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:45:19 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/27 17:23:32 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

void	ft_variables(char chr, va_list ap, int *len);
void	ft_put_p_x(unsigned long long number, int *len, char chr);
void	ft_put_c(unsigned char c, int *len);
void	ft_put_i_d(long int number, int *len);
void	ft_put_u(unsigned int number, int *len);
void	ft_put_s(char *str, int *len);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_printf(const char *s, ...);
#endif
