/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:44:04 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 14:44:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	t_list	node1 = {"First", NULL};
	t_list	node2 = {"Second", NULL};
	t_list	node3 = {"Third", NULL};

	node1.next = &node2;
	node2.next = &node3;

	int	size = ft_lstsize(&node1);
	printf("Tamaño de la lista: %d\n", size);

	return (0);
}
*/