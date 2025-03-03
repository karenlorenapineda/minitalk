/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:51:39 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:51:39 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(){
	char	src[] = "Hello my people";
	char	dest[20];

	ft_memcpy(dest, src, ft_strlen(src) + 1);
	//retorna puntero al bloque de memoria destino
	printf("CAdena copiada: %s\n", dest);
	return (0);
}
*/