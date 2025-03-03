/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:55:37 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:55:37 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/*
#include <stdio.h>

int	main(){
	int	*arr = (int *)ft_calloc(5, sizeof(int)); //N° de elementos y tamaño c/u 

	if (arr == NULL) {
		printf("Error al asignar memoria\n");
		return 1;
	}

	int	i;

	i = 0;
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free (arr);

	return (0);
}
*/