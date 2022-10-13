/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demo_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:19:00 by rwatanab          #+#    #+#             */
/*   Updated: 2022/10/14 01:23:43 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

static void	demo_print_str(const char **format)
{
	const char	*start;

	start = *format;
	while (**format)
		(*format)++;
	write(1, start, *format - start);
}

void	demo_printf(const char *format, ...)
{
	va_list	ap;

	va_start(ap, format);
	while (*format)
	{
		demo_print_str(&format);
	}
	va_end(ap);
	return ;
}

int	main(void)
{
	demo_printf("ABCDEFGHIJKLMNPOQRSTUVWXYZ");
	return (0);
}
