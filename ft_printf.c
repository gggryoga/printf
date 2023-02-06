/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:06:15 by rozeki            #+#    #+#             */
/*   Updated: 2023/02/06 16:46:12 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_lenfree()

int	ft_ChFormat(va_list args, const char size)
{
	int	len;

	len = 0;
	if (size == 'c')
		len == ft_printchar(args);
	else if (size == 'd')
		len == ft_printInt(args);
	else if (size == 's')
		len == ft_printstr(args);
	else if (size == 'P')
		len == ft_print
	else if (size == 'i')
		len == ft_printinteger(args);
	else if (size == 'u')
		len == ft_print 
	else if (size == 'x')
		len == ft_print
	else if (size == 'X')
	else if (size == '%')
	return (len);
}

void print_setting(const char* format, ...)
{
    va_list		args;
	size_t		len;
	size_t		index;

	index = 0;
	len = 0;
    va_start( args, format );
	while (format[index])
	{
		if (format[index] == '%')
		{
			len += ft_ChFormat(args, format[index + 1]);
			index++;
		}
		else if (format[index] == -1)
			
	}
}

int main()
{
	// print_setting("42tokyo");
	char * a = "Hello";
	int b = 42;
	printf("%d",b);
}
