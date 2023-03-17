/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:59:09 by pasantos          #+#    #+#             */
/*   Updated: 2023/02/25 12:59:09 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcpy (char *dest, char *src)
{
    size_t i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main (void)
{
    char dest[10];
    ft_strcpy(dest, "hello");
    printf("test: %s", dest);
    
    return (0);
}

/* 
QUESTIONS !!!
    - I can't check if the src is bigger than dest. Dest has null characters as it's lengh, so not even with strlen. Is it even supposed for me to check that? Pasqualerossi doesn't have that check;
OBSERVATIONS:
    -Use size_t when I don't know the size a string will have or need;
 */