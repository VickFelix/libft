/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:57:57 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/06 20:02:45 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (n);
	}
	return (0);
}
/*
int main()
{
    int result = ft_isdigit('7');  
    printf("%d\n", result);  

    result = ft_isdigit('a');  
    printf("%d\n", result);  
}
*/
