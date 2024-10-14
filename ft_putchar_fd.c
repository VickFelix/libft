/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:23:11 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/13 20:23:59 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <unistd.h> 
int	main(void)
{
	ft_putchar_fd('A', 1);
	ft_putchar_fd('C', 1);
	ft_putchar_fd('B', 1);
	ft_putchar_fd('D', 1);
	return (0);
}*/
