/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 08:18:47 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/14 00:49:39 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, src, size);
	dest[size] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char *orig = "Copia essa coisa";
	char *dest = ft_strdup(orig);
	if(dest != NULL)
	{
		printf("string copiada: %s", dest);
		free(dest);
	}
	else
	{
		printf("falha ao alocar memória ou string vazia.");
	}
}*/
