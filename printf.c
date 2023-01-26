/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:06:15 by rozeki            #+#    #+#             */
/*   Updated: 2023/01/26 16:29:19 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// int	ft_printf(const char *, ...)
// {
	
// }

void print_setting(const char* format, ...)
{
    va_list args;
    va_start( args, format );

	va_arg (args, format);	
    printf( "\n" );

    va_end( args );
}

int main()
{
	print_setting("42tokyo");
}