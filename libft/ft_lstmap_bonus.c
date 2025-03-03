/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:52:04 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 10:52:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*out;
	t_list	*aux;

	if (!lst || !f || !del)
		return (NULL);
	out = NULL;
	while (lst)
	{
		aux = ft_lstnew(lst->content);
		if (!aux)
		{
			ft_lstclear(&out, del);
			return (NULL);
		}
		aux->content = f(aux->content);
		ft_lstadd_back(&out, aux);
		lst = lst->next;
	}
	return (out);
}
/*
#include <stdio.h>

// Función de transformación
void *increment(void *content) {
    int *value = (int *)content;
    int *new_value = malloc(sizeof(int));
    if (new_value) {
        *new_value = *value + 1;  // Incrementar el valor
    }
    return new_value;
}

// Función de liberación
void del(void *content) {
    free(content);
}

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
    int values[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        int *value = malloc(sizeof(int));
        *value = values[i];
        ft_lstadd_back(&list, ft_lstnew(value));
    }

    printf("Lista original:\n");
    print_list(list);

    // Usar ft_lstmap
    t_list *new_list = ft_lstmap(list, increment, del);

    printf("Lista después de ft_lstmap:\n");
    print_list(new_list);

    // Limpiar la lista original y la nueva
    ft_lstclear(&list, del);
    ft_lstclear(&new_list, del);

    return 0;
}
*/