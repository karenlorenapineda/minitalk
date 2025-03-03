/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:55:42 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:55:42 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <string.h>

int	main(){
	char	buffer[10];

	strcpy(buffer, "Hello");
	printf("Antes de ft_bzero: %s\n", buffer);

	ft_bzero(buffer, sizeof(buffer));
	printf("Después de ft_bzero: %s\n", buffer);

	return (0);
}
*/