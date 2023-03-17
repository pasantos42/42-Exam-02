/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:58:12 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/08 16:58:12 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

//-----------------------------------------------------------------------------
bool valid(t_point current, char **tab, t_point size, char to_fill)
{
    return (
           current.x >= 0 
        && current.x <= size.x 
        && current.y >= 0 
        && current.y <= size.y 
        && tab[current.y][current.x] == to_fill
            );
}

void	flood_fill(char **tab, t_point size, t_point current)
{
    if (valid((t_point){cur.x - 1, cur.y}, tab, size, tab[current.y][current.x]))
    {
        (t_point){cur.x - 1, cur.y} = 'F';
        flood_fill(tab, size, (t_point){cur.x - 1, cur.y})
    }
    else if
}

//-----------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010101",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}