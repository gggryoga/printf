/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:06:15 by rozeki            #+#    #+#             */
/*   Updated: 2023/03/21 11:05:46 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_choice(va_list args, const char c)
{
	int	len;

	len = 1;
	if (c == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		len = ft_putnum(va_arg(args,int),1);
	else if (c == 's')
		len = ft_putstr(va_arg(args,char *);
	else if (c == 'P')
		len = ft_putpointer(va_arg(args, unsigned long long));
	else if (c == 'u')
		len = ft_putnum(va_arg(args, unsigned int),2);
	else if (c == 'x')
		len = ft_sixtenn(va_arg(args, unsigned long long),1);
	else if (c == 'X')
		len = ft_sixteen(va_arg(args, unsigned long long),2);
	else if (c == '%')
		len = ft_putchar(c);
	return (len);
}

void print_setting(const char* format, ...)
{
    va_list		args;
	size_t		len;
	size_t		index;

	index = 0;
	len = 0;
    va_start(args, format );
	while (format[index])
	{
		if (format[index] == '%')
		{
			len += ft_ChFormat(args, format[index + 1]);
			index++;
		}
		else
			len += write(1, &format[index], 1);
		else if (format[index] == -1)
			return (0);
		index ++;
	}
	va_end(args);
	return (len);
}

int main()
{
	// print_setting("42tokyo");
	char * a = "Hello";
	int b = 42;
	printf("%d",b);
}
