/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:51:37 by rozeki            #+#    #+#             */
/*   Updated: 2023/03/08 17:55:18 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

unsigned long long ft_hexcheck(int count, int digi, char *ans)
{
	if (count >= 10)
		ans[digi] = ft_itoa(count + 87);
	else
		ans[digi] = count;
	dst = dst / 16;
}