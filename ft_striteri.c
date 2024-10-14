/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 23:39:03 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/14 01:43:45 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void print_char(unsigned int index, char *c)
{
    printf("Index: %u, Char: %c\n", index, *c);
}
int main(void)
{
    char str[] = "queria estar jogango";
    ft_striteri(str, print_char);
    return 0;
}*/
