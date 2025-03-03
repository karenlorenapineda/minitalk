/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:55:30 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:55:30 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>

int	main(){
	char	c1;
	char	c2;
	char	c3;

	c1 = 'L';
	c2 = '1';
	c3 = '#';
	if (ft_isalnum(c1))
	{
		printf("'%c' es alfanúmerico.\n", c1);
	}
	else
	{
		printf("'%c' no es alfanúemrico.\n", c1);
	}

	if (ft_isalnum(c2))
	{
		printf("'%c' es alfanúmerico.\n", c2);
	}
	else
	{
		printf("'%c' no es alfanúemrico.\n", c2);
	}

	if (ft_isalnum(c3))
	{
		printf("'%c' es alfanúmerico.\n", c3);
	}
	else
	{
		printf("'%c' no es alfanúemrico.\n", c3);
	}

	return (0);
}
*/