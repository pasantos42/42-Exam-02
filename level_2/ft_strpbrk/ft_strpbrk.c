/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:07:47 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/06 23:07:47 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s, const char *accept)
{
    size_t i = 0, j = 0;

    while (s[i])
    {
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                return ((char *)&s[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}

int main (void)
{
    char *s = "aaa0bb1c2";
    char *accept = "012";

    printf("expected: %s\n", strpbrk(s, accept));
    printf("mine: %s\n", ft_strpbrk(s, accept));
}
