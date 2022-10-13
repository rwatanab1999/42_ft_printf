/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_va_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:31:37 by rwatanab          #+#    #+#             */
/*   Updated: 2022/10/13 21:55:36 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

double	sumfunc(char *s, ...)
{
	va_list	arg;
	int		sum;
	int		len;
	int		i;

	va_start(arg, s);
	len = ft_strlen(s);
	sum = 0;
	i = 0;
	while (i < len)
	{
		sum = sum + va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (sum);
}

int	main(void)
{
	int		sum;
//	char	*s;

	//*s = {1,1,1,1,1};
	sum = sumfunc("ddddd", 1, 2, 3, 4, 5);
	printf("%d\n", sum);
	return (0);
}
