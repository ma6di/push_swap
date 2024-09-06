/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:06:14 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/16 16:11:54 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push_swap.h"

void	sort(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (stack_size (*a) == 2)
		sa(a, 0);
	else if (stack_size (*a) == 3)
		sort_three(a);
	else
		sort_big(a, b);
}

void	sort_three(t_stack **a)
{
	int	first; 
	int	second; 
	int	third; 

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && second < third && first < third)
		sa(a, 0); 
	else if (first > second && second > third)
	{
		sa(a, 0);
		rra(a, 0); 
	}
	else if (first > second && second < third && first > third)
		ra(a, 0); 
	else if (first < second && second > third && first < third)
	{
		sa(a, 0);
		ra(a, 0); 
	}
	else if (first < second && second > third && first > third)
		rra(a, 0); 
}

void	sort_big(t_stack **a, t_stack *b)
{
	int	i;

	b = ft_sort_into_b(a);
	a = ft_sort_into_a(a, &b);
	i = ft_find_index(*a, ft_min(*a));
	if (i < stack_size(*a) - i)
	{
		while ((*a)->value != ft_min(*a))
			ra(a, 0);
	}
	else
	{
		while ((*a)->value != ft_min(*a))
			rra(a, 0);
	}
}

t_stack	*ft_sort_into_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (stack_size(*a) > 3 && !ft_checksorted(*a))
		pb(a, &b, 0);
	if (stack_size(*a) > 3 && !ft_checksorted(*a))
		pb(a, &b, 0);
	if (stack_size(*a) > 3 && !ft_checksorted(*a))
		ft_sort_b_till_3(a, &b);
	if (!ft_checksorted(*a))
		sort_three(a);
	return (b);
}

t_stack	**ft_sort_into_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->value))
				i = ft_apply_rarb(stack_a, stack_b, tmp->value, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->value))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->value, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->value))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->value, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->value))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->value, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}
