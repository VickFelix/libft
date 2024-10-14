/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 01:28:17 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/14 01:29:05 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int main(void) {
    char src[] = "Bolo de aniversário com chantilly!";
    char dst1[15];  // Buffer menor para causar truncamento
    char dst2[40];  // Buffer maior para copiar a string inteira
    size_t len;

    len = ft_strlcpy(dst1, src, 15);
    printf("Fonte: %s\n", src);
    printf("Destino 1: %s\n", dst1);
    printf("Comprimento retornado: %zu (tamanho de src)\n", len);
    printf("Tamanho do buffer destino 1: %zu\n\n", sizeof(dst1));

    len = ft_strlcpy(dst2, src, 40);
    printf("Fonte: %s\n", src);
    printf("Destino 2: %s\n", dst2);
    printf("Comprimento retornado: %zu (tamanho de src)\n", len);
    printf("Tamanho do buffer destino 2: %zu\n", sizeof(dst2));

    return 0;
}*/
