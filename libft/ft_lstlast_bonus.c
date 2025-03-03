/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:45:44 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 14:45:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;

	if (lst == NULL)
		return (NULL);
	i = ft_lstsize(lst) - 1;
	while (i > 0)
	{
		lst = lst->next;
		i--;
	}
	return (lst);
}
/*
#include <stdio.h>

// Función para imprimir la lista (solo para propósitos de visualización)
void print_list(t_list *lst) {
    while (lst) {
        printf("%d -> ", *(int *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main() {
    // Crear una lista de enteros
    t_list *list = NULL;
    
    // Agregar algunos elementos a la lista
    for (int i = 1; i <= 5; i++) {
        int *value = malloc(sizeof(int));
        *value = i;
        ft_lstadd_back(&list, ft_lstnew(value));
    }

    // Imprimir la lista
    printf("Lista:\n");
    print_list(list);

    // Obtener el último elemento de la lista
    t_list *last_node = ft_lstlast(list);
    if (last_node) {
        printf("Último elemento: %d\n", *(int *)last_node->content);
    } else {
        printf("La lista está vacía.\n");
    }

    // Limpiar la lista
    ft_lstclear(&list, free);

    return 0;
}
*/