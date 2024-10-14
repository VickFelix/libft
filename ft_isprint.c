/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:08:52 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/06 20:09:19 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
	{
		return (c);
	}
	return (0);
}
/*
int main() 
{
   
    int result = ft_isprint('7');  
    printf("%d\n", result);  

    
    result = ft_isprint('a');  
    printf("%d\n", result);  

    
    result = ft_isprint('@');  
    printf("%d\n", result);  
}*/
