/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:51:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 10:51:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int	i;

	if (!lst || !f)
		return ;
	i = ft_lstsize(lst) - 1;
	while (i >= 0)
	{
		f(lst->content);
		lst = lst->next;
		i--;
	}
}
/*
#include <stdio.h>

// Función de impresión para los elementos de la lista
void print_element(void *content) {
    printf("%d\n", *(int *)content);
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

    // Imprimir la lista usando ft_lstiter
    printf("Elementos de la lista:\n");
    ft_lstiter(list, print_element);

    // Limpiar la lista
    ft_lstclear(&list, free);

    return 0;
}
*/