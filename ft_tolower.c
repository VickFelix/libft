/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:36:35 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/06 19:36:43 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int main() {
    printf("Teste de ft_tolower:\n");
    char upper[] = "HELLO WORLD";
    for (int i = 0; upper[i] != '\0'; i++) {
        printf("ft_tolower('%c') = '%c'\n", upper[i], ft_tolower(upper[i]));
}*/
