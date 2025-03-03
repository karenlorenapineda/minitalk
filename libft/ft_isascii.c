/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:55:20 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:55:20 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(){
	char	c1;
	char	c2;
	char	c3;

	c1 = 'A'; //valor ascii 65
	c2 = '\n'; //valor ascii 10
	c3 = 128; //no es ascii estandar no compila xd
	if (ft_isascii(c1))
	{
		printf("'%c' es un carácter ASCII.\n", c1);
	}
	else
	{
		printf("'%c' no es un carácter ASCII.\n", c1);
	}

	if (ft_isascii(c2))
	{
		printf("'%c' es un carácter ASCII.\n", c2);
	}
	else
	{
		printf("'%c' no es un carácter ASCII.\n", c2);
	}

	if (ft_isascii(c3))
	{
		printf("'%c' es un carácter ASCII.\n", c3);
	}
	else
	{
		printf("'%c' no es un carácter ASCII.\n", c3);
	}
}
*/