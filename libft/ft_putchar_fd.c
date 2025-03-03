/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <kpineda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:51:15 by kpineda-          #+#    #+#             */
/*   Updated: 2024/10/11 18:51:15 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write (fd, &c, 1);
}
/*
#include <stdio.h>

int	main()
{
	int	fd = 1; //fd para stdout
	ft_putchar_fd('H', fd);
	ft_putchar_fd('E', fd);
	ft_putchar_fd('L', fd);
	ft_putchar_fd('L', fd);
	ft_putchar_fd('O', fd);
	ft_putchar_fd('\n', fd);
}
*/