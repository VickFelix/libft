/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:09:33 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/07 11:14:53 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *) s;
	while (n > 0)
	{
		*(tmp++) = 0;
		n--;
	}
}
/*
int main()
{
    char palavra[] = "paralelepipedo";
    int i = 0;

    ft_bzero(palavra, 4);  


    while (i < 14)
    {
        if (palavra[i] == '\0')
        {
            printf("\\0");
        }
        else
        {
            printf("%c", palavra[i]);
        }
        i++;
    }

    printf("\n");

    return 0;
}*/
