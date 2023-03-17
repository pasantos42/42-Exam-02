/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:17:03 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/07 20:10:14 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen (int *arr)
{
	int i = 0;

	while (arr[i])
		i++;
	return i;
}

int     *ft_rrange(int start, int end)
{
	int *array;
	
	if (start > end)
		return (ft_rrange(end, start));
	
	long i = start;
	long len = 0;
	while (i++ <= end)
		len++;
	i = 0;

	array = malloc ((len + 1) * sizeof(int));
	
	while (i < len)
		array[i++] = end--;
	array[i] = 0;
	return (array);
}

int main (void)
{
	int *array = ft_rrange(5, -3);
	int i = 0;

	printf("--------\n");
	while (i < 9)
		printf("%i ", array[i++]);
	printf("\n--------\n");
}
