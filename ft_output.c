/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:26:29 by rozeki            #+#    #+#             */
/*   Updated: 2023/03/23 16:12:27 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	size;

	size = write (1, &c, 1);
	return (size);
}

int	ft_putstr(char *str)
{
	int	cnt;
	int	byte;

	cnt = 0;
	byte = 0;
	if (!str)
	{
		byte = write (1, "(null)", 6);
		return (byte);
	}
	while (str[cnt])
	{
		byte = write (1, &str[cnt], 1);
		if (byte == -1)
			return (-1);
		cnt += byte;
	}
	return (cnt);
}

int	ft_putpointer(unsigned long long num)
{
	char	*str;
	int		digit;
	int		cnt;

	digit = ft_hex_size(num);
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (-1);
	str[digit--] = '\0';
	while (digit >= 0)
	{
		str[digit] = num % 16;
		if (str[digit] < 10)
			str[digit--] += '0';
		else if (str[digit] > 9)
			str[digit--] += 'a' - 10;
		num /= 16;
	}
	cnt = write(1, "0x", 2);
	cnt += ft_putstr(str);
	if (cnt == -1)
		return (-1);
	free(str);
	return (cnt);
}

int	ft_sixteen(unsigned int dst, int flag)
{
	char	*str;
	int		digit;
	int		cnt;

	digit = ft_hex_size(dst);
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (-1);
	str[digit--] = '\0';
	while (digit >= 0)
	{
		str[digit] = dst % 16;
		if (str[digit] < 10)
			str[digit] += '0';
		else if (str[digit] > 9 && flag == 1)
			str[digit] += 'a' - 10;
		else if (str[digit] > 9 && flag == 2)
			str[digit] += 'A' - 10;
		digit--;
		dst /= 16;
	}
	cnt = ft_putstr(str);
	free(str);
	return (cnt);
}

int	ft_hex_size(unsigned long long dst)
{
	int	num;

	num = 0;
	if (dst == 0)
		return (1);
	while (dst > 0)
	{
		dst /= 16;
		num ++;
	}
	return (num);
}
