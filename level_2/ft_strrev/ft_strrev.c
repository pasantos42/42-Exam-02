/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:24:01 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/06 23:24:01 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen (char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
} 

char    *ft_strrev(char *s)
{
    int start = 0;
    int end = ft_strlen(s) - 1;
    char tmp;
    int len = ft_strlen(s);

    while (s && start <= (len / 2))
    {
        tmp = s[start];
        s[start++] = s[end];
        s[end--] = tmp;
    }
    return (s);
}

int main (void)
{
    char s[] = "abc";
    printf ("output: %s", ft_strrev(s));
}

/* 
    OBSERVATIONS:
    - declaring s = "" means a string-literal, which is a read-only. I need to put the brackets so it becomes an actual array: s[] = ""
    - don't foget to put - 1 in the "end" variable, so it doesn't doerk with NULL's
 */