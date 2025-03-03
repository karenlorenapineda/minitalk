/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:42:00 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 14:42:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)

{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
    
    // Agregar algunos elementos al frente de la lista
    for (int i = 1; i <= 5; i++) {
        int *value = malloc(sizeof(int));
        *value = i;  // Asignar el valor
        t_list *new_node = ft_lstnew(value);  // Crear un nuevo nodo
        ft_lstadd_front(&list, new_node);  // Añadir al frente de la lista
    }

    // Imprimir la lista
    printf("Lista después de añadir al frente:\n");
    print_list(list);

    // Limpiar la lista
    ft_lstclear(&list, free);

    return 0;
}
*/