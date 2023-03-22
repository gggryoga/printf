/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:01:47 by rozeki            #+#    #+#             */
/*   Updated: 2023/03/22 19:21:12 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnum(int n, int flag)
{
	char*	h;
	int		count;

	if (flag == 1)
		h = ft_itoa(n);
	else
		h = ft_itoa_u(n);
	count = ft_putstr(h);
	free(h);
	return (count);
}

char	*ft_itoa_u(unsigned int n)
{
	char	*h;
	int		digit;

	digit = ft_getdigit(n);
	h = (char *)malloc(sizeof(char) * (digit + 1));
	if (!h)
		return (NULL);
	digit -= 1;
	h[digit] = '\0';
	while (digit >= 0)
	{
		h[digit] = n % 10 + '0';
		n /= 10;
		digit -= 1;
	}
	return (h);
}

int	ft_getdigit(unsigned int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		digit ++;
	}
	return (digit);
}

char *ft_hexcheck(int count, char *ans, int flag)
{
	if (count >= 10 || flag == 1)
		*ans = count + 'a' -10;
	else if (count >= 10 || flag == 2)
		*ans = count + 'A' -10;
	else
		*ans = count + '0';
	return (ans);
}
