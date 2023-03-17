/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos <pasantos@student.42lis +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:28:04 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/06 10:47:55 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0, j = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int main (void)
{
	char *s1 = "aaaaaaf";
	char *s2 = "jshbf";
	printf ("expected: %li\n", strcspn(s1, s2));
	printf ("mine: %li\n", ft_strcspn(s1, s2));
}