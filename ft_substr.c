/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 08:24:44 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/14 01:22:16 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, finish);
	new[finish] = '\0';
	return (new);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "Moranguinho";
	char	*substr = ft_substr(str, 7, 5);
	printf("Resultado: %s\n", substr);
	free(substr);

	substr = ft_substr(str, 0, 5);
	printf("Resultado: %s\n", substr);
	free(substr);

	substr = ft_substr(str, 1, 7);
	printf("Resultado: %s\n", substr);
	free(substr);

	return (0);
}*/
