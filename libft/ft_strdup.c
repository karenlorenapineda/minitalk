/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:49:50 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:49:50 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main(){
	char	str[] = "Hello my people";
	char	*dup_str = ft_strdup(str);

	if (dup_str != NULL)
	{
		printf("cadena original: %s\n", str);
		printf("cadena duplicada: %s\n", dup_str);
		free(dup_str);
	}
	else
		printf("Error al duplicar cadena.\n");
	return (0);
}
*/