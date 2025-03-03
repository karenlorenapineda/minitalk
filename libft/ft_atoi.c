/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:47:27 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/03 15:47:27 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int	main(){
	char	str1[] = "12345";
	char	str2[] = "42 and some text";
	char	str3[] = "no nbr";

	int	num1 = ft_atoi(str1);
	int num2 = ft_atoi(str2);
	int	num3 = ft_atoi(str3);

	printf("Número convertido: %d\n", num1);
	printf("Número convertido: %d\n", num2);
	printf("Número convertido: %d\n", num3);

	return (0);
}
*/