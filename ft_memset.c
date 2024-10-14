/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:03:06 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/07 11:01:55 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*(ptr++) = (unsigned char)c;
		n--;
	}
	return (s);
}
/*
int main()
{
    char msg[] = "Gatinhos Lindos";
    int i = 0;
    ft_memset(msg, 65, 5);
    while(msg[i] != '\0')
    {
        printf("%c", msg[i]);
        i++;
    }
}*/
