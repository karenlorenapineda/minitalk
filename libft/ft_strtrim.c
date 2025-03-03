/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:47:12 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:47:12 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	len = j - i;
	out = (char *)malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1 + i, len + 1);
	return (out);
}
/*
#include <stdio.h>

int	main()
{
	char	*s1 = "---Hello people!--";
	char	*set = "-";
	char	*result;

	result = ft_strtrim(s1, set);
	if (result)
	{
		printf("Resultado de ft_strtrim: %s\n", result);
		free (result);
	}	
}
*/