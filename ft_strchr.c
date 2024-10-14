/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:16:21 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/06 20:18:49 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			x;

	x = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == x)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char teste[10] = {"Chocolate"};
	char *retorno = ft_strchr(teste, 'o');
	if (retorno != NULL)
	{
		printf("O caractere foi encontrado em %s\n", retorno);
	}
	else
	{
		printf("O caractere nao foi encontrado");
	}
}*/
