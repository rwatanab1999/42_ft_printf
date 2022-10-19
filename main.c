/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:17:47 by rwatanab          #+#    #+#             */
/*   Updated: 2022/10/20 00:32:13 by rwatanab         ###   ########.fr       */
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

	printf("\x1b[31m");
	printf("\n-#-#-#-#-#-test start-#-#-#-#-#-");
	printf("\x1b[39m");
	printf("\n>test0--------------------------\n");
	printf("(onry character)\n");
	printf("orgn : Hello World\n");
	ft_printf("copy : Hello World\n");
	printf("\n>test1--------------------------\n");
	printf("(**format == 'c')\n");
	printf("orgn : test1 = %c\n", test1);
	ft_printf("copy : test1 = %c\n", test1);
	printf("\n>test2--------------------------\n");
	printf("(**format == 's')\n");
	printf("orgn : test2 = %s\n", test2);
	ft_printf("copy : test2 = %s\n", test2);
	printf("\n>test3--------------------------\n");
	printf("(**format == 'p')\n");
	printf("orgn : test3 = %p\n", test3);
	ft_printf("copy : test3 = %p\n", test3);
	printf("\n>test4--------------------------\n");
	printf("(**format == 'd' or 'i')\n");
	printf("orgn : test4(%%d) = %d\n       test4(%%i) = %i\n", test4, test4);
	ft_printf("copy : test4(%%d) = %d\n       test4(%%i) = %i\n", test4, test4);
	printf("\n>test5--------------------------\n");
	printf("(**format == 'u')\n");
	printf("orgn : test5 = %u\n", test5);
	ft_printf("copy : test5 = %u\n", test5);
	printf("\n>test6--------------------------\n");
	printf("(**format == 'x')\n");
	printf("orgn : test6_1 = %x\n       test6_2 = %x\n", test6_1, test6_2);
	ft_printf("copy : test6_1 = %x\n       test6_2 = %x\n", test6_1, test6_2);
	printf("\n>test7--------------------------\n");
	printf("(**format == 'X')\n");
	printf("orgn : test7_1 = %X\n       test7_2 = %X\n", test7_1, test7_2);
	ft_printf("copy : test7_1 = %X\n       test7_2 = %X\n", test7_1, test7_2);
	printf("\n>test8--------------------------\n");
	printf("(**format == '%%')\n");
	printf("orgn : Genius is 1%% inspiration and 99%% perspiration.\n");
	ft_printf("copy : Genius is 1%% inspiration and 99%% perspiration.\n");
	printf("\x1b[31m");
	printf("\n-#-#-#-#-#- test end -#-#-#-#-#-");
	printf("\x1b[39m");
	printf("\n");
	return (0);
}
