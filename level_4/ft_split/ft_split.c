/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:24:19 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/08 18:24:19 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void free_index (char **tmp)
{
    char **ptr = tmp;
    while (*ptr)
        free(*ptr++);
    free(tmp);
}

int ft_strlen (char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return (i);
}

char    **ft_split(char *s)
{
    size_t i = 0, j = 0, k = 0;
    char **tmp;

    tmp = malloc(sizeof(char *) * (ft_strlen(s) + 1)); 
    while (i < ft_strlen(s) + 1)
        tmp[i++] = malloc(sizeof(char) * (ft_strlen(s) + 1));
    tmp[i] = NULL;
    i = 0;

    while (s[i])
    {
        printf ("%c | j = %li, k = %li\n", s[i], j, k);
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\0')
        {
            tmp[j++][k] = '\0';
            k = 0;
        }
        else
            tmp[j][k++] = s[i];
        i++;
    }
    tmp[j][k] = '\0';
    tmp[++j] = NULL;
    return (tmp);
}

int main (void)
{
    int i = 0;
    char **s = ft_split("one two three");

    while (s[i])
        printf("%s\n", s[i++]);
    free_index (s);
}
