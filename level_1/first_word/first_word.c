/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:15:50 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/22 23:15:50 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char** argv)
{
    if (argc == 2)
    {
        int i = 0;

        while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i])
            i++;
        while ((argv[1][i] != ' ' && argv[1][i] != '\t') && argv[1][i])
            write (1, &argv[1][i++], 1);
    }
    write (1, "\n", 1);
    return (0);
}

/* 
OBSERVATIONS:

    - Write() takes a pointer, not a character or int. Therefore, it can receive a string "" or a dereferenced pointer &;

    - I got my environment variables printed out cause I forgot to check for nulls
*/
