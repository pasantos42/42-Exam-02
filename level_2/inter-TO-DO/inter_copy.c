/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:05:49 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/07 00:05:49 by pasantos         ###   ########.fr       */
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

void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
        write (1,&s[i++],1);
}

int main (int argc, char **argv)
{
    if (argc == 3)
    {
        char * s1 = argv[1];
        char * s2 = argv[2];
        char tmp[ft_strlen(s1)];
        int i = 0, j = 0, k = 0, l = 0;
        int flag;

        *tmp = '0';
        while (s1[i])
        {
            while (s2[j])
            {
                if (s1[i] == s2[j])
                    tmp[k++] == s1[i];
                j++;
            }
            i++;
        }
        tmp[k] = 0;
        printf ("%s", tmp);
        ft_putstr (tmp);
    }
    write (1,"\n",1);
    return (0);
}
