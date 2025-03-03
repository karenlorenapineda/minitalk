/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:45:42 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:45:42 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>

int	main(){
	char	c1;

	c1 = 'a'; 
	char	result = ft_toupper(c1);

	printf("Original: %c, Convertido: %c\n", c1, result);
	return (0);
}
*/