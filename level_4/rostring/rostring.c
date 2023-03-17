/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:44:49 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/08 15:44:49 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen (char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        char *s = argv[1];
        char first_word[ft_strlen(s)];

        while (s[i] && s[i] != ' ' && s[i] != '\t')
        {
            first_word[i] = s[i];
            i++;
        }
        first_word[i] = 0;
        i++;
        while (s[i])
            write (1, &s[i++], 1);
        i = 0;
        write (1, " ", 1);
        while (first_word[i])
            write (1, &s[i++], 1);
    }
    write (1, "\n", 1);
    return (0);
}
