/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:29:27 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 18:29:27 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
    int i = 0, n = 0;
    while (s[i])
        n = (n * 10) + (s[i++] - '0');
    return (n);
}

void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr (n / 10);
    int a = (n % 10) + '0';
    write (1, &a, 1);
}

int main (int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 2;
        int n1 = ft_atoi (argv[1]);
        int n2 = ft_atoi (argv[2]);
        int div = 1;
        printf ("n1: %d, n2: %d\n", n1, n2);

        while (i <= n1 && i <= n2)
        {
            if ((n1 % i) == 0 && (n2 % i) == 0)
                div = i;
            i++;
        }
        ft_putnbr (div);
    }
    write (1, "\n", 1);
}