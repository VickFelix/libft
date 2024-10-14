/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:57:21 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/06 19:57:24 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int main()
{
    char lower[] = "hello world";
    for (int i = 0; lower[i] != '\0'; i++) {
        printf("ft_toupper('%c') = '%c'\n", lower[i], ft_toupper(lower[i]));
    }
}*/
