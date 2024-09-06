/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_idsc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:39:10 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/09 18:43:33 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"
#include "./include/libft.h"

int	is_d_i(int num)
{
	char	*num_str;
	int		count;

	num_str = ft_itoa(num);
	count = ft_strlen(num_str);
	ft_putnbr_fd(num, 1);
	count = ft_strlen(num_str);
	free(num_str);
	return (count);
}

int	is_str(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (s[i])
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	return (i);
}

int	is_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
