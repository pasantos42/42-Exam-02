/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:56:45 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 18:56:45 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

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

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        long i = 2;
        long n = atoi (argv[1]);
        int flag = 1;

        while (i <= n)
        {
            if (ft_isprime(i) && n % i == 0)
            {
                n /= i;
                if (flag != 1)
                    printf("*");
                flag = 0;
                printf("%ld", i);
                continue;
            }
            i++;
        }
    }
    printf("\n");
}
