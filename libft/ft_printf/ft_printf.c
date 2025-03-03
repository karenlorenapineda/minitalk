/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:33:54 by kpineda-          #+#    #+#             */
/*   Updated: 2025/01/13 22:17:02 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_chr(int chr)
{
	return (write(1, &chr, 1));
}

static int	ft_print_format(const char chr, va_list arg)
{
	int		i;

	i = 0;
	if (chr == '%')
		i += ft_print_chr('%');
	else if (chr == 'c')
		i += ft_print_chr(va_arg(arg, int));
	else if (chr == 's')
		i += ft_print_str(va_arg(arg, char *));
	else if (chr == 'd' || chr == 'i')
		i += ft_print_num(va_arg(arg, int));
	else if (chr == 'u')
		i += ft_print_unum(va_arg(arg, int));
	else if (chr == 'x')
		i += ft_print_hexnum(va_arg(arg, int), 0);
	else if (chr == 'X')
		i += ft_print_hexnum(va_arg(arg, int), 32);
	else if (chr == 'p')
		i += ft_print_ptr(va_arg(arg, unsigned long));
	else
		i += ft_print_chr(chr);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(arg, str);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_print_format(str[i + 1], arg);
			i++;
		}
		else
			len += ft_print_chr(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}

/*
int main()
{
	char *ptr_null = NULL;
	char *ptr = "NULL";

	ft_printf("Null check:\n");

	ft_printf("NULL:%i \n", ft_printf(NULL));
	//printf("Estandar:%i\n", printf(NULL));


	ft_printf("%% check:\n");

	ft_printf("creado: %% \n");
	printf("original: %%\n");

	
	ft_printf("string check:\n");

	ft_printf("Str check:\n");
	ft_printf("lenght: %i \n", ft_printf("%s\n", NULL));
	//printf("original:\n");
	//printf("lenght: %i \n", printf("%s\n", NULL));

	ft_printf("creado:\n");
	ft_printf("lenght: %i \n", ft_printf("hola %s \n", "mundo"));
	printf("original:\n");
	printf("lenght: %i \n", printf("hola %s \n", "mundo"));
    return 0;

	ft_printf("Num check:\n");

	ft_printf("creado:\n");
	ft_printf("len: %i \n", ft_printf("unum: %u \n", 4294967295));
	ft_printf("len: %i \n", ft_printf("num: %i \n", -2147483648));
	ft_printf("len: %i \n", ft_printf("num: %i \n", 0));
	printf("original:\n");
	printf("len: %i \n", printf("unum: %u \n", (unsigned int)4294967295));
	printf("len: %i \n", printf("num: %i \n", (unsigned int)-2147483648));
	printf("len: %i \n", printf("num: %i \n", 0));


	ft_printf("Pointer check:\n");
	
	ft_printf("creado: \n");
	ft_printf("len: %i \n", ft_printf("ptr:  %p \n", ptr));
	ft_printf("len: %i \n", ft_printf("ptr:  %p \n", ptr_null));
	printf("original: \n");
	printf("len: %i \n", printf("ptr:  %p \n", ptr));
	printf("len: %i \n", printf("ptr:  %p \n", ptr_null));


	ft_printf("Hex check:\n");
	ft_printf("creado: \n");
	ft_printf("len: %i \n", ft_printf("hexnum:  %x \n", 0));
	ft_printf("len: %i \n", ft_printf("hexnum:  %X \n", 15));
	ft_printf("len: %i \n", ft_printf("hexnum:  %x \n", 4294967295));
	ft_printf("len: %i \n", ft_printf("hexnum:  %X \n", 4294967295));
	printf("original: \n");
	printf("len: %i \n", printf("hexnum:  %x \n", 0));
	printf("len: %i \n", printf("hexnum:  %X \n", 15));
	printf("len: %i \n", printf("hexnum:  %x \n", (unsigned int)4294967295));
	printf("len: %i \n", printf("hexnum:  %X \n", (unsigned int)4294967295));

    return 0;
}
*/

/*
int main()
{
	// Casos de prueba (modularizados)
	ft_printf("Pointer check:\n");
	int x = 42;
	ft_printf("creado: [%p]\n", &x);
	printf("original: [%p]\n", &x);

	ft_printf("\nHexadecimal check:\n");
	ft_printf("creado: [%x]\n", (unsigned int)4294967295);
	printf("original: [%x]\n", (unsigned int)4294967295);

	ft_printf("\nUnsigned check:\n");
	ft_printf("creado: [%u]\n", (unsigned int)4294967295);
	printf("original: [%u]\n", (unsigned int)4294967295);

	return 0;
}
*/