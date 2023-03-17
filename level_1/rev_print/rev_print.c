/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:42:16 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/25 20:42:16 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen (char* str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main (int argc, char** argv)
{
    if (argc == 2)
    {
        int i = ft_strlen(argv[1]);
        while (i >= 0)
            write (1, &(argv[1][i--]), 1);
    }
    write (1, "\n", 1);
    return (0);
}