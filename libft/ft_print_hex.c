/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:31:37 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/09 18:43:08 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"
#include "./include/libft.h"

int	calculate_hex_length(unsigned long long value)
{
	int	length;

	length = 0;
	while (value != 0)
	{
		length++;
		value = value / 16;
	}
	return (length);
}

void	to_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		to_hex(num / 16, format);
		to_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		to_hex(num, format);
	return (calculate_hex_length(num));
}
