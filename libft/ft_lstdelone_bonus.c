/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:45:08 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 10:45:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
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

// Función de liberación
void del(void *content) {
    free(content);
}

int main() {
    // Crear una lista de enteros
    t_list *list = NULL;

    // Agregar algunos elementos a la lista
    for (int i = 1; i <= 5; i++) {
        int *value = malloc(sizeof(int));
        if (!value) {
            perror("malloc");
            return 1;
        }
        *value = i;  // Asignar el valor
        t_list *new_node = ft_lstnew(value);  // Crear un nuevo nodo
        if (!new_node) {
            free(value);
            perror("ft_lstnew");
            return 1;
        }
        ft_lstadd_back(&list, new_node);  // Añadir al final de la lista
    }

    // Imprimir la lista original
    printf("Lista antes de ft_lstdelone:\n");
    print_list(list);

    // Eliminar el tercer nodo (valor 3)
    t_list *node_to_delete = list->next->next; // El tercer nodo
    if (node_to_delete) {
        // Conectar el nodo anterior con el siguiente
        t_list *prev_node = list->next; // Nodo 2
        prev_node->next = node_to_delete->next; // Conectar nodo 2 con nodo 4
        
        // Eliminar el nodo
        ft_lstdelone(node_to_delete, del);
    }

    // Imprimir la lista después de eliminar un nodo
    printf("Lista después de eliminar el nodo con valor 3:\n");
    print_list(list);

    // Limpiar la lista restante
    ft_lstclear(&list, del);

    return 0;
}
*/