/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:52:23 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/05 00:52:23 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *s)
{
    int i = 0;
    int n = 0;
    int sign = 1;

    while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
        	i++;
    if (s[i++] == '-')
        sign = -1;
    while (s[i] >= '0' && '9' >= s[i])
        n = (n * 10) + (s[i++] - '0');
    return (n * sign);
}

/* int main (void)
{
    printf("%i", ft_atoi ("-135363"));
} */

/* 
    OBSERVATIONS:
    - Check for white-spaces;
    - Check for negatives;
    - Get the number before non-number characters;

    - Compare between characters, not numbers: s[i] > 9 || s[i] > '9'
 */
