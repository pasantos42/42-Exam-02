/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:35:54 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 22:35:54 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int tmp = tab[0], i = -1;
    while (tab[i++] && i <= len)
        if (tab[i] > tmp)
            tmp = tab[i];
    return (tmp);
}

/* int main (void)
{
    int array[] = {6, 193, 35, 500, 245, 813, 0 };
    int i = 0;

    while (array[i])
        printf ("%d | ", array[i++]);
    printf ("\n%d\n", max(array, i));
} */