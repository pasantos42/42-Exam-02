/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:12:23 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 22:12:23 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t ft_strspn(const char *s, const char *accept)
{
    int i = 0, j = 0, flag = 0;

    while (s[i])
    {
        j = 0;
        flag = 0;
        while (accept[j])
            if (s[i] == accept[j++])
                flag = 1;
        if (flag != 1)
            return (i);
        i++;
    }
}
