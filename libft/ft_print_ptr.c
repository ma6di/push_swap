/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:34:43 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/12 12:47:29 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"
#include "./include/libft.h"

int	p_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	put_p(uintptr_t num)
{
	if (num >= 16)
	{
		put_p(num / 16);
		put_p(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	is_p(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	else
	{
		write(1, "0x", 2);
		put_p(ptr);
		count += p_len(ptr);
	}
	return (count + 2);
}
