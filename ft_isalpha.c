/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:55:44 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/06 19:56:34 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int s)
{
	if (!((s >= 65 && s <= 90) || (s >= 97 && s <= 122)))
	{
		return (s);
	}
	return (0);
}

/*
int main()
{
    int result = ft_isalpha('A');
    printf("%d", result);
    printf("%d",  isalpha('c'));
}
*/
