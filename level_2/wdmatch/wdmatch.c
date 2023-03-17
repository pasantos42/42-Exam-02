/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:22:11 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 16:22:11 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr (char *s)
{
    int i = 0;
    while (s[i])
        write(1, &s[i++], 1);
}

int main (int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 0, j = 0;
        int check, offset = -1;
        char *s1 = argv[1];
        char *s2 = argv[2];

        while (s1[i])
        {
            j = 0;
            check = 0;
                printf("--%c--\n", s1[i]);
            while (s2[j])
            {
                if (s1[i] == s2[j] && j > offset)
                {
                    printf("%c\n", s2[j]);
                    check = 1;
                    offset = j;
                    break;
                }
                j++;
            }
            if (check == 0)
                break;
            i++;
        }
        if (check == 1)
            ft_putstr(s1);
    }
    write (1, "\n", 1);
    return (0);
}