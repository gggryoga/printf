/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:04:51 by rozeki            #+#    #+#             */
/*   Updated: 2023/03/23 16:17:24 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_choice(va_list args, const char c);
int		ft_putnum(int n, int flag);
char	*ft_itoa_u(unsigned int n);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putpointer(unsigned long long num);
int		ft_sixteen(unsigned int dst, int flag);
char	*ft_hexcheck(int count, char *ans, int flag);
int		ft_hex_size(unsigned long long dst);
int		ft_getdigit(unsigned int n);

#endif 