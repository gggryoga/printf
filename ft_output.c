/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:26:29 by rozeki            #+#    #+#             */
/*   Updated: 2023/03/22 20:01:39 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
	int	size;
	
	size = write (1, &c, 1);
	return (size);
}

int ft_putstr(char *str)
{
	int size;
	int	count;

	size = 0;
	count = 0;
	if (!str)
		size = write(1, "(null)", 6);
	else
	{
		while (str[count])
		{
			if (ft_putchar(*str) == -1)
				return (-1);
			size ++;
		}
	}
	return (size);
}

int ft_putpointer(uintptr_t dst)
{
	int		digi;
	int		num;
	char	*tmp;

	digi = ft_hex_size(dst);
	
	if (!tmp)
		return (-1);
	len = 0;
	size = ft_putstr(tmp);
	if (size == -1)
	len += size;
	return (len);
}

int	ft_sixteen(unsigned long long dst, int flag)
{
	int	count;
	char *ans;
	int size;

	ans = 0;
	count = 0;
	size = 0;
	while ((dst / 16) >0)
	{
		count = dst % 16;
		ans = ft_hexcheck(count, ans, flag);
		ans ++;
	}
	count = write(1, "0x", 2);
	while (size >= 0)
	{
		count = count + ft_putchar(*ans);
		size --;
		ans--;
	}
	return (count);
}

int ft_hex_size(unsigned long long dst)
{
	int num;

	num = 0;
	while ((dst / 16) > 0)
	{
		dst = dst / 16;
		num ++;
	}
	return (num);
}
