/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:33:37 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/22 23:33:37 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (void)
{
    int a, b, i = 1;
    
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write (1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        else if (i % 5 == 0)
            write (1, "buzz", 4);
        else
        {
            if (i < 10)
            {
                a = i + 48;
                write (1, &a, 1);
            }
            else
            {
                a = i / 10 + 48;
                b = i % 10 + 48;
                write (1, &a, 1);
                write (1, &b, 1);
            }
        }
        write (1, "\n", 1);
        i++;
    }
    return (0);
}
