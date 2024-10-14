/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:42:28 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/14 01:22:55 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char upper(unsigned int index, char c) 
{
	if(index % 2 == 0)
	{
		if (c >= 'a' && c <= 'z') 
		{
			return c - 32;
		}
	}
	return c;
}

int main() {
    const char *str = "abc";
    char *result = ft_strmapi(str,upper);
    
	if (result) 
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
    
    return 0;
}*/
