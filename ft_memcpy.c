/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:41:38 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/06 19:42:45 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *orig, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	if (dest == NULL && orig == NULL)
	{
		return (dest);
	}
	tmp1 = (unsigned char *) dest;
	tmp2 = (unsigned char *) orig;
	while (n > 0)
	{
		*(tmp1) = *(tmp2);
		tmp1++;
		tmp2++;
		n--;
	}
	return (dest);
}
/*
int main()
{
    char palavra[] = "Sorvete";
    char dest[10];
    int i = 0;
    
    ft_memcpy(dest, palavra, 4);
    
    while(i < 5) 
    {
        printf("%c", dest[i]);
        i++;
    }
}*/
