/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:51:55 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:51:55 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == to_find)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(){
	char	str[] = "Hello 42, I'm Lorena";
	char	c = 'L';
	char	*result = ft_memchr(str, c, ft_strlen(str));

	// retorna puntero a 1er byte de coincidencia con c
	if (result != NULL){
		printf("El carácter '%c' esta en posición: %ld\n", c, result - str);
	}
	else
	{
		printf("El carácter '%c' no se encontró.\n", c);
	}
}
*/