/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:20:18 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/16 16:20:24 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push_swap.h"

void	ft_sort_b_till_3(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (stack_size(*a) > 3 && !ft_checksorted(*a))
	{
		tmp = *a;
		i = ft_rotate_type_ab(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*a, *b, tmp->value))
				i = ft_apply_rarb(a, b, tmp->value, 'a');
			else if (i == ft_case_rrarrb(*a, *b, tmp->value))
				i = ft_apply_rrarrb(a, b, tmp->value, 'a');
			else if (i == ft_case_rarrb(*a, *b, tmp->value))
				i = ft_apply_rarrb(a, b, tmp->value, 'a');
			else if (i == ft_case_rrarb(*a, *b, tmp->value))
				i = ft_apply_rrarb(a, b, tmp->value, 'a');
			else
				tmp = tmp->next;
		}
	}
}

int	ft_find_place_b(t_stack *stack_b, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push > stack_b->value && nbr_push < ft_listlast(stack_b)-> value)
		i = 0;
	else if (nbr_push > ft_max(stack_b) || nbr_push < ft_min(stack_b))
		i = ft_find_index(stack_b, ft_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->value < nbr_push || tmp->value > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_stack *stack_a, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push < stack_a->value && nbr_push > ft_listlast(stack_a)-> value)
		i = 0;
	else if (nbr_push > ft_max(stack_a) || nbr_push < ft_min(stack_a))
		i = ft_find_index(stack_a, ft_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->value > nbr_push || tmp->value < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}
