/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:49:24 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/07 11:35:59 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmpsour;
	char	*tmpdest;
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	tmpsour = (char *) src;
	tmpdest = (char *) dst;
	if (tmpdest > tmpsour)
	{
		while (len-- > 0)
			tmpdest[len] = tmpsour[len];
	}
	else
	{
		while (i++ < len)
			tmpdest[i] = tmpsour[i];
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char source[] = {"Morango Azedo"};
	char dest[15] = {"mobilete 123"};
	ft_memmove(dest, source, 5);

	for(int i = 0; i < 13; i++)
	{
		printf("%c", dest[i]);
	}
}*/
