/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 02:02:55 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/26 02:02:55 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        char c;
        char *s = argv[1];

        while (s[i])
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                c = s[i] + 32;
                write (1, &c, 1);
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                c = s[i] - 32;
                write (1, &c, 1);
            }
            else
                write (1, &s[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}