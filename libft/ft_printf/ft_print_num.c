/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:31:43 by kpineda-          #+#    #+#             */
/*   Updated: 2025/01/13 20:32:47 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexnum(unsigned int unum, int menor)
{
	int		len;

	len = 0;
	if (unum >= 16)
	{
		len += ft_print_hexnum(unum / 16, menor);
		len += ft_print_hexnum(unum % 16, menor);
	}
	else
	{
		if (unum < 10)
			ft_print_chr(unum + '0');
		else
			ft_print_chr(unum - 10 + 'a' - menor);
		len++;
	}
	return (len);
}

int	ft_print_unum(unsigned int unum)
{
	int		len;

	len = 0;
	if (unum == 0)
		len += ft_print_chr('0');
	else
	{
		if (unum / 10 != 0)
			ft_print_unum(unum / 10);
		ft_print_chr((unum % 10) + '0');
		while (unum > 0)
		{
			unum /= 10;
			len++;
		}
	}
	return (len);
}

int	ft_print_num(int num)
{
	int		len;

	len = 0;
	if (num == 0)
		return (ft_print_chr('0'));
	else if (num == -2147483648)
		return (ft_print_str("-2147483648"));
	else if (num < 0)
	{
		len += ft_print_chr('-');
		num *= -1;
	}
	if (num >= 10)
	{
		len += ft_print_num(num / 10);
		len += ft_print_num(num % 10);
	}
	else
		len += ft_print_unum((unsigned int)num);
	return (len);
}
