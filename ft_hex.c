
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:51:37 by rozeki            #+#    #+#             */
/*   Updated: 2023/03/15 17:54:51 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

char * ft_hexcheck_small(int count, int digi, char *ans)
{
	if (count >= 10 || flag == 1)
		ans[digi] = ft_itoa(count + 'a' -10);
	else if (count >= 10 || flag == 2)
		ans[digi] = ft_itoa(count + 'A' -10);
	else
		ans[digi] = count;
	return (ans);
}
