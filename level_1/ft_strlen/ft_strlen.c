/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:50:13 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/25 19:50:13 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}