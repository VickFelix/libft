/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 00:08:08 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/14 01:33:48 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear > front)
			rear--;
		str = (char *)malloc (sizeof(char) * (rear - front + 1));
		if (str)
			ft_strlcpy(str, &s1[front], rear - front + 1);
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
    char *result;

    result = ft_strtrim("   Hello, World!   ", " ");
    printf("Trimmed: '%s'\n", result);
    free(result);

    result = ft_strtrim("!!!Hello, World!!!", "!");
    printf("Trimmed: '%s'\n", result);
    free(result);

    result = ft_strtrim("###Hello, #World###", "#");
    printf("Trimmed: '%s'\n", result);
    free(result);

    result = ft_strtrim("NoTrimHere", " ");
    printf("Trimmed: '%s'\n", result);
    free(result);

    return 0;
}*/
