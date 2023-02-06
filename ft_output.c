/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:26:29 by rozeki            #+#    #+#             */
/*   Updated: 2023/02/06 17:09:38 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printchar(char c)
{
	int	size;
	
	size = write (1, &c, 1);
	return (size);
}

int ft_printStr(char *str)
{
	int size;
	size_t	count;

	size = 0;
	count = 0;
	if (!str)
		size = write(1, "(null)", 6);
	else
	{
		while (str[count])
		{
			if (ft_printchar(*str) == -1)
				return (-1);
			size ++;
		}
	}
	return (size);
}

int ft_printPointer(uintptr_t dst)
{
	
}