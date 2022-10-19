/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:08:51 by rwatanab          #+#    #+#             */
/*   Updated: 2022/10/20 00:15:58 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	pf_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

ssize_t	pf_putchar(char c)
{
	return (write(1, &c, 1));
}

ssize_t	pf_putstr(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, pf_strlen(s)));
}
