/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:36:04 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/13 18:36:04 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    t_list *ptr = lst;

    while (ptr->next)
    {
        if (cmp(ptr->data, ptr->next->data) == 0)
        {
            printf ("switching (%i, %i)\n", ptr->data, ptr->next->data);
            swap = ptr->data;
            ptr->data = ptr->next->data;
            ptr->next->data = swap;
            ptr = lst; //to reset the counting after a swap
        }
        else
            ptr = ptr->next;
    }
    
    return (lst);
}

//----------------------------------------------------------------------

//----------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

t_list *create_node(int data)
{
    t_list *node = malloc(sizeof(t_list));
    node->data = data;
    node->next = NULL;
    return (node);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
}

int cmp(int a, int b)
{
    return (a <= b);
}

int main(void)
{
    t_list *lst = create_node(2);
    lst->next = create_node(1);
    lst->next->next = create_node(4);
    lst->next->next->next = create_node(3);

    printf("Before sorting: ");
    print_list(lst);

    lst = sort_list(lst, cmp);

    printf("After sorting: ");
    print_list(lst);

    return (0);
}
