/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:54:59 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/19 12:41:34 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push_swap.h"

int	all_ckecks(char *str, t_stack *a)
{
	int	value;

	if (!is_valid_number(str))
	{
		ft_printf("Error\n");
		return (0); 
	}
	value = ft_atoi(str);
	if (is_duplicate(a, value))
	{
		ft_printf("Error\n");
		return (0); 
	}
	return (1);
}

int	is_duplicate(t_stack *a, int value)
{
	while (a)
	{
		if (a->value == value)
			return (1);
		a = a->next;
	}
	return (0); 
}

int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (!ft_char_ckeck(i, str))
		return (0);
	if (!check_int_max_min(str))
		return (0);
	return (1);
}

int	ft_char_ckeck(int i, char *str)
{
	int	sign_count;

	sign_count = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		sign_count++;
		i++;
	}
	if (sign_count > 1)
		return (0);
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	check_int_max_min(char *str)
{
	long	value;

	value = ft_atoi2(str);
	if (value > INT_MAX || value < INT_MIN)
		return (0);
	return (1);
}
