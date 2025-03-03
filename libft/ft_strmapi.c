/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:48:16 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:48:16 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char	transform(unsigned int index, char c)
{
	return c + index;
}

int	main(){
	const char	*str = "Hello, people";
	char	*new_str = ft_strmapi(str, transform);

	if (new_str)
	{
		printf("Cadena original: %s\n", str);
		printf("Cadena transformada: %s\n", new_str);
		free (new_str);
	}
	else
		printf("Error al transformar cadena.\n");

	return (0);
}
*/