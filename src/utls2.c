/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utls2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:27:47 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/19 12:41:03 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push_swap.h"

int	ft_find_index(t_stack *a, int nbr)
{
	int		i;

	i = 0;
	while (a->value != nbr)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

t_stack	*ft_listlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_free_split(char **split)
{
	int	i; 

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	ft_checksorted(t_stack *a)
{
	int	i;

	i = a->value;
	while (a)
	{
		if (i > a->value)
			return (0);
		i = a->value;
		a = a->next;
	}
	return (1);
}

long	ft_atoi2(const char *str)
{
	int		i;
	int		negative;
	long	new_num;

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
		new_num = (new_num * 10) + (str[i] - '0');
		i++;
	}
	return (new_num * negative);
}
