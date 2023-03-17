/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 01:35:34 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/05 01:35:34 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp (char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char) s2[i] - (unsigned char) s1[i]);
}

int main (void)
{
    char *a = "doao";
    char *b = "dobo";
    int i = ft_strcmp(a, b);

    printf("%i", i);
}
