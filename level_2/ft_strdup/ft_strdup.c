/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos <pasantos@student.42lis +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:48:57 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/06 11:00:00 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen (char *s)
{
	int i = 0;
	
	while (s[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int i = 0;
	
	char *dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int main (void)
{
	char *s = "aaaaaaf";
	printf ("expected: %s\n", strdup(s));
	printf ("mine: %s\n", ft_strdup(s));
}
