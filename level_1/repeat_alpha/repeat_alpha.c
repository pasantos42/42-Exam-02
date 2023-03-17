/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:16:17 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/25 20:16:17 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int index;

        while (argv[1][i])
        {
            if (argv[1][i] > 96 && argv[1][i] < 123)
            {
                index = argv[1][i] - 96;
                while (index > 0)
                {
                    write (1, &argv[1][i], 1);
                    --index;
                }
            }
            else
                write (1, &argv[1][i], 1);
            i++;
        }

    }
    write (1, "\n", 1);
}

/* 
OBSERVATIONS:
    - Command to test:

    clear && gcc -Wall -Wextra -Werror repeat_alpha.c && ./a.out "a | b | c | d | e | f | g | h | i | j | k | l | m | n | o | p | q | r | s | t | u | v | w | x | y | z"
 */
