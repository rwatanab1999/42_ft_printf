/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:17:47 by rwatanab          #+#    #+#             */
/*   Updated: 2022/10/20 19:34:06 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char			test1 = 'a';
	char			*test2 = "abc";
	char			*test3 = "abc";
	int				test4 = -42;
	unsigned int	test5 = 42;
	unsigned int	test6_1 = 4;
	unsigned int	test6_2 = 42;
	unsigned int	test7_1 = 4;
	unsigned int	test7_2 = 42;
	ssize_t			count = 0;
	char			*test9 = NULL;

	printf("\x1b[31m");
	printf("\n-#-#-#-#-#-test start-#-#-#-#-#-\n");
	printf("\x1b[39m");
	
	printf("\n>test0--------------------------\n");
	printf("(onry character)\n");
	count = printf("orgnl : Hello World\n");
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	count = ft_printf("mimic : Hello World\n");
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	
	printf("\n>test1--------------------------\n");
	printf("(**format == 'c')\n");
	count = printf("orgnl : test1 = %c\n", test1);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	count = ft_printf("mimic : test1 = %c\n", test1);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	
	printf("\n>test2--------------------------\n");
	printf("(**format == 's')\n");
	count = printf("orgnl : test2 = %s\n", test2);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	count = ft_printf("mimic : test2 = %s\n", test2);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);

	printf("\n>test3--------------------------\n");
	printf("(**format == 'p')\n");
	count = printf("orgnl : test3 = %p\n", test3);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	count = ft_printf("mimic : test3 = %p\n", test3);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	
	printf("\n>test4--------------------------\n");
	printf("(**format == 'd' or 'i')\n");
	count = printf("orgnl : test4(%%d) = %d\n       test4(%%i) = %i\n", test4, test4);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	count = ft_printf("mimic : test4(%%d) = %d\n       test4(%%i) = %i\n", test4, test4);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	
	printf("\n>test5--------------------------\n");
	printf("(**format == 'u')\n");
	count = printf("orgnl : test5 = %u\n", test5);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	count = ft_printf("mimic : test5 = %u\n", test5);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	
	printf("\n>test6--------------------------\n");
	printf("(**format == 'x')\n");
	count = printf("orgnl : test6_1 = %x\n       test6_2 = %x\n", test6_1, test6_2);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	count = ft_printf("mimic : test6_1 = %x\n       test6_2 = %x\n", test6_1, test6_2);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	
	printf("\n>test7--------------------------\n");
	printf("(**format == 'X')\n");
	count = printf("orgnl : test7_1 = %X\n       test7_2 = %X\n", test7_1, test7_2);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	count = ft_printf("mimic : test7_1 = %X\n       test7_2 = %X\n", test7_1, test7_2);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	
	printf("\n>test8--------------------------\n");
	printf("(**format == '%%')\n");
	count = printf("orgnl : Genius is 1%% inspiration and 99%% perspiration.\n");
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	count = ft_printf("mimic : Genius is 1%% inspiration and 99%% perspiration.\n");
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);

	printf("\n>test9--------------------------\n");
	printf("(char *test9 = NULL)\n");
	count = printf("orgnl : %%s -> %s, %%p -> %p\n", test9, test9);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	count = ft_printf("mimic : %%s -> %s, %%p -> %p\n", test9, test9);
	printf("\x1b[32m----> count = %zd\x1b[39m\n", count);
	
	printf("\x1b[31m");
	printf("\n-#-#-#-#-#- test end -#-#-#-#-#-");
	printf("\x1b[39m");
	printf("\n");
	return (0);
}
