/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:59:07 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 16:59:07 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

bool ft_isprime (int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i++ == 0)
            return (false);
    }
    return (true);
}

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

int main (int argc, char ** argv)
{
    if (argc == 2 && argv[1][0] != '-')
    {
        int n = ft_atoi(argv[1]);
        int i = 2, sum = 0;
        printf("n: %d\n", n);

        while (i <= n)
        {
            if (ft_isprime(i))
                sum += i;
            i++;
        }
        ft_putnbr(sum);
    }
    else
        write (1, "0", 1);
    write (1, "\n", 1);
}