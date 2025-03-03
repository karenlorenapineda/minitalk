/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:55:25 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:55:25 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(){
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = 'L';
	c2 = 'l';
	c3 = '#';
	c4 = '7';
	if (ft_isalpha(c1))
	{
		printf("'%c' es una letra.\n", c1);
	}
	else
	{
		printf("'%c' no es una letra.\n", c1);
	}

	if (ft_isalpha(c2))
	{
		printf("'%c' es una letra.\n", c2);
	}
	else
	{
		printf("'%c' no es una letra.\n", c2);
	}

	if (ft_isalpha(c3))
	{
		printf("'%c' es una letra.\n", c3);
	}
	else
	{
		printf("'%c' no es una letra.\n", c3);
	}

	if (ft_isalpha(c4))
	{
		printf("'%c' es una letra.\n", c4);
	}
	else
	{
		printf("'%c' no es una letra.\n", c4);
	}
	return (0);
}
*/