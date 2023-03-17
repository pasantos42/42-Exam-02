/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 03:04:17 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/26 03:04:17 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen (char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            i++;
        i++;
    }
    return (i);
}

void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
        write(1, &s[i++], 1);
}

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        char *s = argv[1];
        int i = 0, j = 0;

        char *new = malloc((ft_strlen(s) + 1) * sizeof(char));

        while (s[i])
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                new[j++] = '_';
            new[j++] = s[i++];
        }
        ft_putstr(new);
    }
    write (1, "\n", 1);
    return (0);
}

/* 
    OBSERVATIONS
        - When allocating a double pointer, iterated thorugh it to do a malloc;
        - When null terminating a double pointer, use NULL instead of '\0'
 */