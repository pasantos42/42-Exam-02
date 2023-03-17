/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:22:31 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 22:22:31 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        char *s = argv[1];

        while (s[i])
        {
            if (s[i] == '_' && s[i + 1])
            {
                i++;
                int a = s[i] - ('a' - 'A');
                write (1, &a, 1);
            }
            else
                write (1, &s[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
