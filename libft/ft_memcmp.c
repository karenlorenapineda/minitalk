/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:51:46 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:51:46 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
		{
			return ((int)(*str1 - *str2));
		}
		i++;
		str1++;
		str2++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(){
	char	str1[] = "Hello";
	char	str2[] = "Hellium";

	int	result = ft_memcmp(str1, str2, 4);
	if (result < 0)
	{
		printf("str1 < str2.\n"); //mayor por valor ascii
	}
	else if (result == 0)
	{
		printf("str1 = str2.\n");
	}
	else
	{
		printf("str1 > str2.\n");
	}
	return (0);
}
*/