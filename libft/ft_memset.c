/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:51:24 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:51:24 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(){
	char	buffer[10];

	ft_memset(buffer, 0, sizeof(buffer));
	printf("Después de memset a 0: ");
	int	i = 0;
	while (i < sizeof(buffer))
	{
		printf("%d ", buffer[i]);
		i++;
	}
	printf("\n");

	ft_memset(buffer, 'A', sizeof(buffer)); //65 Ascii
	printf("Después de memset a 'A': ");
	int	j = 0;
	while (j < sizeof(buffer))
	{
		printf("%d ", buffer[j]);
		j++;
	}
	printf("\n");

	return (0);
}
*/