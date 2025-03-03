/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:54:52 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:54:52 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int c)
{
	int	i;

	i = 1;
	if (c < 0)
		i++;
	while (c / 10 != 0)
	{
		i++;
		c /= 10;
	}
	return (i);
}

char	*ft_itoa(int c)
{
	char	*out;
	int		sign;
	int		len;

	sign = 0;
	len = ft_len(c);
	if (c == -2147483648)
		return (ft_strdup("-2147483648"));
	out = (char *)malloc(len * sizeof(char) + 1);
	if (!out)
		return (NULL);
	if (c < 0)
	{
		c = -c;
		sign = 1;
	}
	out[len] = '\0';
	while (len-- > 0)
	{
		out[len] = c % 10 + '0';
		c /= 10;
	}
	if (sign == 1)
		out[0] = '-';
	return (out);
}
/*
#include <stdio.h>

int	main()
{
	int	nbr = 12345;
	char	*str = ft_itoa(nbr);
	printf("Número en cadena: %s\n", str);
	free (str);
	return (0);
}
*/