/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:58:39 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/29 17:45:03 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_itoa
{
	char	*str;
	int		size;
	int		is_negative;
	int		i;
}	t_itoa;

int	ft_size(int n)
{
	int	size;

	size = 1;
	if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*is_min_int(int n, char *str)
{
	int	i;

	if (!str)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	n = 147483648;
	i = 10;
	while (i >= 2)
	{
		str[i] = (n % 10) + '0';
		i--;
		n /= 10;
	}
	str[11] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	t_itoa	data;

	data.is_negative = 0;
	data.size = ft_size(n);
	data.str = malloc(sizeof(char) * (data.size + 1));
	if (!data.str)
		return (NULL);
	if (n == -2147483648)
		return (is_min_int(n, data.str));
	else if (n < 0)
	{
		data.is_negative = 1;
		n = -n;
		data.str[0] = '-';
	}
	data.str[data.size] = '\0';
	data.i = data.size - 1;
	while (data.i >= data.is_negative)
	{
		data.str[data.i--] = (n % 10) + '0';
		n /= 10;
	}
	return (data.str);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Your ft_size, is_min_int, and ft_itoa functions here...

int main()
{
    int test_cases[] = {0, -123, 456, -2147483648, 2147483647};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_cases; i++)
    {
        char *result = ft_itoa(test_cases[i]);
        if (result)
        {
            printf("Integer: %d, String: %s\n", test_cases[i], result);
            free(result); // Freeing the allocated memory
        }
        else
        {
            printf("Memory allocation failed for %d\n", test_cases[i]);
        }
    }

    return 0;
}*/
