/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:37:02 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/13 18:49:19 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_sour;
	size_t	len_dest;

	len_sour = ft_strlen(src);
	len_dest = ft_strlen(dst);
	if (len_dest >= dstsize)
		len_dest = dstsize;
	if (len_dest == dstsize)
		return (dstsize + len_sour);
	if (len_sour < dstsize - len_dest)
		ft_memcpy(dst + len_dest, src, len_sour + 1);
	else
	{
		ft_memcpy(dst + len_dest, src, dstsize - len_dest - 1);
		dst[dstsize - 1] = '\0';
	}
	return (len_dest + len_sour);
}
/*
#include <stdio.h>
int main()
{
	char *src = {"macarrao."};
	char dst[15] = {"adoro "};
	int n;
	n = ft_strlcat(dst, src,14);
	printf("%d", n);
	printf("String concatenada: %s", dst);
}*/
