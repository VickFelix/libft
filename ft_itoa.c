/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 23:53:33 by vfelix-d          #+#    #+#             */
/*   Updated: 2024/10/14 09:54:43 by vfelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_len(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	nb;

	len = get_len(n);
	result = (char *)malloc (len + 1);
	nb = n;
	if (!result)
		return (NULL);
	result[len--] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (len >= 0 && result[len] != '-')
	{
		result[len--] = '0' + nb % 10;
		nb /= 10;
	}
	return (result);
}

/*
int main(void)
{
    int numbers[] = {1234, -5678, 0};
    size_t count = sizeof(numbers) / sizeof(numbers[0]);

    for (size_t i = 0; i < count; i++)
    {
        char *result = ft_itoa(numbers[i]);
        printf("ft_itoa(%d) = %s\n", numbers[i], result);
        free(result);
    }

    return 0;
}*/
