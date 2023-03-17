/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:34:06 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/13 18:34:06 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
        return ;

    t_list *ptr = *begin_list;

    while (ptr)
    {
        if (cmp(ptr->data, data_ref) == 0)
        {
			*begin_list = (*begin_list)->next;
			free(ptr);
			ptr = *begin_list;
        }
        else
            ptr = ptr->next;
    }
}

//---------------------------------------------------------------------

 #include <stdio.h>
 #include <string.h>

 void	print_list(t_list **begin_list)
 {
 	t_list *ptr = *begin_list;
 	while (ptr != 0)
 	{
 		printf("%s\n", (char*)ptr->data);
 		ptr = ptr->next;
 	}
 }

 int		main(void)
 {
 	char straa[] = "String aa";
 	t_list *aa = malloc(sizeof(t_list));
 	aa->next = 0;
 	aa->data = straa;

 	char strbb[] = "String bb";
 	t_list *bb = malloc(sizeof(t_list));
 	bb->next = 0;
 	bb->data = strbb;

 	char strcc[] = "String cc";
 	t_list *cc = malloc(sizeof(t_list));
 	cc->next = 0;
 	cc->data = strcc;

 	char strdd[] = "String dd";
 	t_list *dd = malloc(sizeof(t_list));
 	dd->next = 0;
 	dd->data = strdd;

 	aa->next = bb;
 	bb->next = cc;
 	cc->next = dd;

 	t_list **begin_list = &aa;

 	print_list(begin_list);
 	printf("----------\n");
 	ft_list_remove_if(begin_list, straa, strcmp);
 	print_list(begin_list);
}
