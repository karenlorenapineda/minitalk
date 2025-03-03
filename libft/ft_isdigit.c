/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:55:13 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:55:13 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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

	c1 = '5';
	c2 = 'l';
	c3 = '#';
	c4 = '0';
	if (ft_isdigit(c1))
	{
		printf("'%c' es un dígito decimal.\n", c1);
	}
	else
	{
		printf("'%c' no es un dígito decimal.\n", c1);
	}

	if (ft_isdigit(c2))
	{
		printf("'%c' es un dígito decimal.\n", c2);
	}
	else
	{
		printf("'%c' no es un dígito decimal.\n", c2);
	}

	if (ft_isdigit(c3))
	{
		printf("'%c' es un dígito decimal.\n", c3);
	}
	else
	{
		printf("'%c' no es un dígito decimal.\n", c3);
	}

	if (ft_isdigit(c4))
	{
		printf("'%c' es un dígito decimal.\n", c4);
	}
	else
	{
		printf("'%c' no es un dígito decimal.\n", c4);
	}
	return (0);
}
*/