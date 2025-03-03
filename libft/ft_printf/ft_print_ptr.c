/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:32:17 by kpineda-          #+#    #+#             */
/*   Updated: 2025/01/13 20:32:35 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_get_ptr(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_get_ptr(ptr / 16);
		ft_get_ptr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_print_chr(ptr + '0');
		else
			ft_print_chr(ptr - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long ptr)
{
	int		len;

	len = 0;
	if (ptr == 0)
		return (ft_print_str("(nil)"));
	len += ft_print_str("0x");
	ft_get_ptr(ptr);
	len += ft_ptrlen(ptr);
	return (len);
}
