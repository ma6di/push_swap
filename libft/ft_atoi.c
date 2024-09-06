/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:35:08 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/29 19:24:12 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	int	new_num;

	i = 0;
	negative = 1;
	new_num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = negative * -1;
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((new_num == 214748364) && (str[i] == '8') && (negative % 2 == 1))
			return (-2147483648);
		new_num = (new_num * 10) + (str[i] - '0');
		i++;
	}
	return (new_num * negative);
}
