/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:55:48 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/25 20:55:48 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{
    if ( argc == 2)
    {
        int c;
        int i = 0;

        while ((c = argv[1][i]))
        {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            {
                if (c >= 'N' && c <= 'Z')
                    c += 13 - ('Z' - 'A' + 1);
                else if (c >= 'n' && c <= 'z')
                    c += 13 - ('z' - 'a' + 1);
                else
                    c += 13;
                write (1, &c, 1);
            }
            else
                write (1, &c, 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
