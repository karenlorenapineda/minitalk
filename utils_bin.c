/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:34:43 by kpineda-          #+#    #+#             */
/*   Updated: 2025/03/03 22:41:03 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*ft_itoa_bin(unsigned int n)
{
	char	*binary;
	int		i;

	binary = (char *)malloc(8 + 1);
	allocate_check(binary);
	binary[8] = '\0';
	i = 7;
	while (i >= 0)
	{
		if (n % 2 == 1)
			binary[i] = '1';
		else
			binary[i] = '0';
		n = n / 2;
		i--;
	}
	return (binary);
}

char	*str_bin(const char *str)
{
	char	*binary;
	char	*char_bin;
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	binary = (char *)malloc(8 * ft_strlen(str) + 1);
	allocate_check(binary);
	i = 0;
	j = 0;
	while (str[i])
	{
		char_bin = ft_itoa_bin((unsigned int)str[i]);
		if (!char_bin)
			return (ft_free(binary));
		ft_strlcpy(&binary[j], char_bin, 9);
		j += 8;
		free(char_bin);
		i++;
	}
	return (binary);
}

void	bit_set(int signal, char *current_byte, int *bit_index)
{
	static char	bit_position[8] = {128, 64, 32, 16, 8, 4, 2, 1};

	if (signal == SIGUSR1)
		*current_byte += bit_position[*bit_index];
	(*bit_index)++;
}

int	check_byte(int *bit_index)
{
	if (*bit_index == 8)
	{
		*bit_index = 0;
		return (1);
	}
	return (0);
}

void	length_byte(char current_byte, size_t *lenght)
{
	if (current_byte >= '0' && current_byte <= '9')
		*lenght = (*lenght) * 10 + (current_byte - '0');
}
