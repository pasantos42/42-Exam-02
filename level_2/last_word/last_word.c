/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 23:01:44 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 23:01:44 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
        int i = ft_strlen(s) - 1;

        while ((s[i] == ' ' || s[i] == '\t') && s[i])
            i--;
        int end = i;
        while (s[i] != ' ' && s[i] != '\t' && s[i])
            i--;
        i++;
        while (s[i] && i <= end)
            write (1, &s[i++], 1);
    }
    write (1, "\n", 1);
    return (0);
}