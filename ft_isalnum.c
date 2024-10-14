/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:11:59 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/06 20:14:23 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	t_isalnum(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (c);
	}
	return (0);
}
/*
int main() 
{
   
    int result = my_isalnum('7');  
    printf("%d\n", result);  

    
    result = my_isalnum('a');  
    printf("%d\n", result);  

    
    result = my_isalnum('%');  
    printf("%d\n", result);  
}
*/
