/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 02:20:18 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/26 02:20:18 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr (char *str)
{
    while (*str)
        write(1, &*str++, 1);
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
        int i = 0;
        int index;
        char *s = argv[1];
        char new[ft_strlen(s)];

        while (s[i])
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                index = s[i] - ('a');
                new[i] = 'z' - index;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                index = s[i] - ('A');
                new[i] = 'Z' - index;
            }
            else
                new[i] = s[i];
            i++;
        }
        new[i] = 0;
        ft_putstr (new);
    }
    write (1, "\n", 1);
    return (0);
}
