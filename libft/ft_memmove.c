/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:51:32 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:51:32 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dest == NULL)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d >= s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(d, s, len);
	return (dest);
}
/*
//copia incluso cuando las áreas de memoria se solapan 
#include <stdio.h>

int	main(){
	char	str[] = "Hello, 42";

	ft_memmove(str + 7, str, 5);
	printf("Cadena modificada: %s\n", str);
}
*/