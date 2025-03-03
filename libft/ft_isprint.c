/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:55:07 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:55:07 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(){
	char	c1;
	char	c2;
	char	c3;

	c1 = 'A'; 
	c2 = ' '; 
	c3 = '\n'; 
	if (ft_isprint(c1))
	{
		printf("'%c' es imprimible.\n", c1);
	}
	else
	{
		printf("'%c' no es imprimible.\n", c1);
	}

	if (ft_isprint(c2))
	{
		printf("'%c' es imprimible.\n", c2);
	}
	else
	{
		printf("'%c' no es imprimible.\n", c2);
	}

	if (ft_isprint(c3))
	{
		printf("'%c' es imprimible.\n", c3);
	}
	else
	{
		printf("'%c' no es imprimible.\n", c3);
	}
	return (0);
}
*/