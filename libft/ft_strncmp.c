/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:48:00 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:48:00 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(){
	char	str1[] = "Hello";
	char	str2[] = "Hellium";
	int	n = 5;

	int	result = ft_strncmp(str1, str2, n);
	if (result < 0)
	{
		printf("str1 < str2"); //mayor por valor ascii
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