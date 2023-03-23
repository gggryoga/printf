/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:06:15 by rozeki            #+#    #+#             */
/*   Updated: 2023/03/23 16:28:43 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatch(va_list args, const char c)
{
	int	len;

	len = 1;
	if (c == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		len = ft_putnum(va_arg(args, int), 1);
	else if (c == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len = ft_putpointer(va_arg(args, unsigned long long));
	else if (c == 'u')
		len = ft_putnum(va_arg(args, unsigned int), 2);
	else if (c == 'x')
		len = ft_sixteen(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		len = ft_sixteen(va_arg(args, unsigned int), 2);
	else if (c == '%')
		len = ft_putchar(c);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	len;
	size_t	index;

	index = 0;
	len = 0;
	va_start (args, format);
	while (format[index])
	{
		if (format[index] == '%')
		{
			len += ft_formatch(args, format[index + 1]);
			index++;
		}
		else
			len += write(1, &format[index], 1);
		index ++;
	}
	va_end(args);
	return (len);
}
