/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:30:20 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/26 20:30:20 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int nbrlen (int n, int i)
{
    if (n >= 10)
        nbrlen (n / 10, ++i);
    else
        return (++i);
}

int ft_strlen (char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char *rev (char *s)
{
    int len = ft_strlen (s);
    int a = 0;
    int b = len - 1;
    char tmp;

    while (a < len / 2)
    {
        tmp = s[a];
        s[a++] = s[b];
        s[b--] = tmp;
    }
    return (s);
}

char *ft_itoa (int _n)
{
    long n = _n;
    int i = 0;
    int flag = 0;
    char *s = malloc((nbrlen(n, 1) + 1) * sizeof(char));

    if (n == 0)
        return ("0");
    if (n < 0)
    {
        n = -n;
        flag = 1;
    }

    while (n / 10 != 0)
    {
        s[i++] = n % 10 + '0';
        n = n / 10;
    }
    s[i++] = n % 10 + '0';
    if (flag == 1)
        s[i++] = '-';
    s[i] = 0;
    return (rev(s));
}

int main (void)
{
    int i = 0;
    char *s = ft_itoa(INT_MIN);
    printf("%s\n", s);
}
