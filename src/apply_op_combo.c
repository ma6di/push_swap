/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_comb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:26:38 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/16 15:26:52 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push_swap.h"

int	ft_apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && ft_find_place_b(*b, c) > 0)
			rr(a, b, 0);
		while ((*a)->value != c)
			ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->value != c && ft_find_place_a(*a, c) > 0)
			rr(a, b, 0);
		while ((*b)->value != c)
			rb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			ra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && ft_find_place_b(*b, c) > 0)
			rrr(a, b, 0);
		while ((*a)->value != c)
			rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->value != c && ft_find_place_a(*a, c) > 0)
			rrr(a, b, 0);
		while ((*b)->value != c)
			rrb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			rra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			rra(a, 0);
		while ((*b)->value != c)
			rb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ra(a, 0);
		while ((*b)->value != c)
			rrb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}
