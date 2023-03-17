/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:33:06 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/22 22:33:06 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
        char *s = argv[1];
        int end = ft_strlen(s);
        int cursor = end;
        int flag = 1;
        int i = 0;

        while (cursor >= 0)
        {
            if (s[cursor] == ' ' || s[cursor] == '\t' || cursor == 0)
            {
                i = cursor + 1;
                if (cursor == 0)
                    i--;

                while (i < end)
                    write(1, &s[i++], 1);
                if (cursor != 0)
                    write(1, " ", 1);
                end = cursor--;
            }
            cursor--;
        }
    }
    write (1, "\n", 1);
    return (0);
}
