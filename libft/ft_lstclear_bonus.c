/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:48:41 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 10:48:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !del)
		return ;
	aux = NULL;
	while (*lst)
	{
		aux = (*lst);
		*lst = aux->next;
		ft_lstdelone(aux, del);
	}
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
        *value = i;  // Asignar el valor
        t_list *new_node = ft_lstnew(value);  // Crear un nuevo nodo
        ft_lstadd_back(&list, new_node);  // Añadir al final de la lista
    }

    // Imprimir la lista
    printf("Lista antes de ft_lstclear:\n");
    print_list(list);

    // Limpiar la lista
    ft_lstclear(&list, del);

    // Verificar que la lista está vacía
    if (list == NULL) {
        printf("La lista ha sido limpiada.\n");
    } else {
        printf("La lista no se limpió correctamente.\n");
    }

    return 0;
}
*/