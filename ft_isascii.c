/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:48:39 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/06 19:49:12 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int main() 
{
   
    int result = ft_isascii('7');  
    printf("%d\n", result);  

    
    result = ft_isascii('a');  
    printf("%d\n", result);  

    
    result = ft_isascii('%');  
    printf("%d\n", result);  
}*/
