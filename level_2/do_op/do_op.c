/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:37:30 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/05 00:37:30 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    if (argc == 4)
    {
        char *a = argv[1];
        char *b = argv[3];
        char op = argv[2][0];
        int  tmp;

        if (op == '+')
            tmp = atoi(a) + atoi(b);
        else if (op == '-')
            tmp = atoi(a) - atoi(b);
        else if (op == '*')
            tmp = atoi(a) * atoi(b);
        else if (op == '/')
            tmp = atoi(a) / atoi(b);
        else if (op == '%')
            tmp = atoi(a) % atoi(b);
        printf ("%d", tmp);
    }
    write (1, "\n", 1);
    return (0);
}