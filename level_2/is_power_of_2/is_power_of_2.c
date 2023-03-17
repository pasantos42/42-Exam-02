/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:12:58 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 18:50:47 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	int a = n;
	float nbr = a;
	
	while (nbr > 2)
		nbr /= 2;
	if (nbr == 2 || n == 1)
		return 1;
	return 0;
}