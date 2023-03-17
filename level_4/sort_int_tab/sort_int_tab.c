/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:35:04 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 20:35:04 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int tmp;
    int i = 0;

    while (tab[i] && i <= size)
    {
        if (tab[i - 1] && tab[i] < tab[i - 1])
        {
            tmp = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = tmp;
            i = 0;
        }
        i++;
    }
}

/* int main (void)
{
    int array[] = {398, 193, 35, 123, 245, 213, 0 };
    int i = 0;

    while (array[i])
        printf ("%d | ", array[i++]);
    sort_int_tab(array, i);
    printf ("\n");
    i = 0;
    while (array[i])
        printf ("%d | ", array[i++]);
} */