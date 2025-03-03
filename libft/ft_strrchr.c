/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:47:32 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:47:32 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(s);
	if (a == 0)
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(){
	const char* cadena = "Esta es una cafena de cadena ejemplo";
	char*	result = ft_strrchr(cadena, 'e');

	if (result)
		printf("Última aparición de 'e': %s\n", result); 
	else
		printf("Carácter no encontrado.\n");
	return (0);
}
*/