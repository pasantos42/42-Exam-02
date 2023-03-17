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

void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            int a = s[i] + 32;
            write(1, &a, 1);
        }
        else
            write(1, &s[i], 1);
        i++;
    }
}

void ft_putsnake (char **tmp)
{
    int i = 0;

    while (tmp[i])
    {
        if (i != 0)
            write(1, "_", 1);
        ft_putstr(tmp[i++]);
    }
}

void free_index (char **tmp)
{
    char **ptr = tmp;
    while (*ptr)
        free(*ptr++);
    free(tmp);
}

int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        char *s = argv[1];
        int i = 0, j = 0, k = 0;

        char **tmp = malloc((ft_strlen(s) + 1) * sizeof(char *));
        if (!tmp)
        {
            printf("Failed to Malloc\n");
            return 1;
        }
        else
        {
            while (j < ft_strlen(s) + 1)
            {
                tmp[j] = malloc((ft_strlen(s) + 1) * sizeof(char));
                j++;
            }
            tmp[j] = NULL;
            j = 0;
        }
        
        while (s[i])
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                k = 0;
                tmp[++j][k++] = s[i++];
            }
            else
                tmp[j][k++] = s[i++];
        }
        tmp[j][k] = '\0';
        tmp[++j] = NULL;

        ft_putsnake(tmp);
        free_index(tmp);
    }
    write (1, "\n", 1);
    return (0);
}

/* 
    LEFT TO CORRECT:
        -free(): invalid pointer
 */
