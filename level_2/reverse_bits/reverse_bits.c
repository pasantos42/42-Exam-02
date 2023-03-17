/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos < pasantos@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:17:38 by pasantos          #+#    #+#             */
/*   Updated: 2023/03/17 15:17:38 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char reversed = 0;
    int i = 0;

    while (i < 8)
    {
        reversed = (reversed << 1) | (octet & 1);
        octet >>= 1;
        i++;
    }
}

void print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
        printf("%c", bit);
	}
}

int main (void)
{
    print_bits('c');
    printf("\n");
    print_bits(reverse_bits('c'));
    printf("\n");
}