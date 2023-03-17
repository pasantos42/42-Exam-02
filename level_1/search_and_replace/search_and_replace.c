/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search__and_replace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 01:42:46 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/26 01:42:46 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    if (argc == 4 && !argv[2][1] && !argv[3][1])
    {
        char *s = argv[1];
        char c1 = argv[2][0];
        char c2 = argv[3][0];
        int i = 0;

        while (s[i])
        {
            if (s[i] == c1)
                write (1, &c2, 1);
            else
                write (1, &s[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}