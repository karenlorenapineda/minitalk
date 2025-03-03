/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:49:37 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:49:37 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	ex_function(unsigned int index, char *c)
{
	if (*c >= 97 && *c <= 122)
		*c = (*c - 32);
	printf("Index: %u, char: %c\n", index, *c);
}

int	main(){

	char	str[] = "Hello people";
	ft_striteri(str, ex_function);
	printf("Resultado final: %s\n", str);

	return (0);
}
*/