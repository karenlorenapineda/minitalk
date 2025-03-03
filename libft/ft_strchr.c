/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:50:02 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:50:02 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
			return ((char *)s);
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>

int	main(){
	const char	*str = "Hello people";
	char	c = 'p';
	char	*result = ft_strchr(str, c);
	if (result)
		printf("El carácter '%c' está en: %s\n", c, result);
	else
		printf("El carácter '%c' no se encontró.\n", c);

	return (0);
}
*/