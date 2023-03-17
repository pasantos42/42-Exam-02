/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos <pasantos@student.42lis +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:59:26 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/06 11:59:28 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int greater (char *s1, char *s2)
{
	int len_s1 = ft_strlen(s1);
	int len_s2 = ft_strlen(s2);
	
	if (len_s1 > len_s2)
		return (len_s1);
	return (len_s2);
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		char *s1 = argv[1];
		char *s2 = argv[2];
		char tmp[greater(s1, s2)];
		int flag = 0;
		int i = 0, j = 0, k = 0;
		while (s1[i])
		{
			j = 0;
			flag = 0;
			while (tmp[j])
			{
				if (s1[i] == tmp[j])
					flag = 1;
				j++;
			}
			if (flag == 0)
				tmp[k++] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i])
		{
			j = 0;
			flag = 0;
			while (tmp[j])
			{
				if (s2[i] == tmp[j])
					flag = 1;
				j++;
			}
			if (flag == 0)
				tmp[k++] = s2[i];
			i++;
		}
		tmp[k] = 0;
		i = 0;
		while (tmp[i])
			write (1, &tmp[i++], 1);
	}
	write (1, "\n", 1);
	return (0);
}