/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:41:48 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 10:41:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if ((*lst) == NULL)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	else
	{
		aux = ft_lstlast(*lst);
		aux->next = new;
	}
}
/*
#include <stdio.h>

int	main()
{
	t_list	*head = ft_lstnew("First");
	t_list	*second = ft_lstnew("Second");
	t_list	*third = ft_lstnew("Third");

	ft_lstadd_back(&head, second);
	ft_lstadd_back(&head, third);

	t_list *temp = head;
	while (temp)
	{
		printf("Contenido del nodo: %s\n", (char *)temp->content);
		temp  = temp->next;
	}
	temp = head;
	while (temp)
	{
		t_list *next = temp->next;
		free(temp);
		temp = next;
	}
	return(0);
}
*/