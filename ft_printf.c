/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:19:00 by rwatanab          #+#    #+#             */
/*   Updated: 2022/10/20 08:55:46 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	fmt_specifier_func(const char **format, ssize_t *count, va_list *ap)
{
	(*format)++;
	if (**format == 'c') //符号付き整数を文字として出力．（Shift-JIS の全角文字も可）
		*count = *count + pf_putchar((char)va_arg(*ap, int));
	else if (**format == 's') //ヌル終端文字列のポインタを文字列で出力．
		*count = *count + pf_putstr(va_arg(*ap, char *));
	else if (**format == 'p') //ポインタの値を16進数で出力．
		*count = *count + pf_putptr(va_arg(*ap, uintptr_t));
	else if (**format == 'd' || **format == 'i') //符号付き整数を10進で出力．
		*count = *count + pf_putnbr((ssize_t)va_arg(*ap, int), DECIMAL);
	else if (**format == 'u') //符号なし整数を10進で出力．
		*count = *count + pf_putnbr((ssize_t)va_arg(*ap, unsigned int), DECIMAL);
	else if (**format == 'x') //符号なし整数を16進数で出力．10 ～ 15 の桁は 'a' ～'f'．
		*count = *count + pf_putnbr((ssize_t)va_arg(*ap, unsigned int), HEXADECIMAL_LOW);
	else if (**format == 'X') //符号なし整数を16進数で出力．10 ～ 15 の桁は 'A' ～'F'．
		*count = *count + pf_putnbr((ssize_t)va_arg(*ap, unsigned int), HEXADECIMAL_HIGH);
	else if (**format == '%') //%自体を出力するには「%%」と記述.
		*count = *count + write(1, "%", 1);
	(*format)++;
}

static void	str_output_func(const char **format, ssize_t *count)
{
	const char	*start;

	start = *format;
	while (**format != '%' && **format)
		(*format)++;
	*count = *count + write(1, start, *format - start);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	ssize_t	count;

	va_start(ap, format);
	count = 0;
	while (*format && count < INT_MAX)
	{
		if (*format == '%')
			fmt_specifier_func(&format, &count, &ap);
		else
			str_output_func(&format, &count);
	}
	va_end(ap);
	if (count >= INT_MAX)
		return (-1);
	return (count);
}
