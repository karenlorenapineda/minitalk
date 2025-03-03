/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:47:49 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:47:49 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[h] == '\0')
		return ((char *)haystack);
	while (haystack[h])
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(){
	char	haystack[] = "Esta es una cafena de cadena ejemplo";
	char	needle[] = "cadena";
	size_t	len = 50;

	char	*result = ft_strnstr(haystack, needle, len);
	if (result)
		printf("Subcadena encontrada: %s\n", result); 
	else
		printf("Subcadena no encontrada.\n");
	return (0);
}
*/