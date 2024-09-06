/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oprations2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:51:31 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/16 15:51:39 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push_swap.h"

void	rr(t_stack **a, t_stack **b, int j)
{
	ra(a, 1);
	rb(b, 1);
	if (j == 0)
		write(1, "rr\n", 3);
}

void	rra(t_stack **a, int j)
{
	t_stack	*last;
	t_stack	*secondlast;

	if (!*a || !(*a)->next)
		return ;
	last = *a;
	secondlast = NULL;
	while (last->next)
	{
		secondlast = last;
		last = last->next;
	}
	last->next = *a;
	secondlast->next = NULL;
	*a = last;
	if (j == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b, int j)
{
	t_stack	*last;
	t_stack	*secondlast;

	if (!*b || !(*b)->next)
		return ;
	last = *b;
	secondlast = NULL;
	while (last->next)
	{
		secondlast = last;
		last = last->next;
	}
	last->next = *b;
	secondlast->next = NULL;
	*b = last;
	if (j == 0)
		write(1, "rrb\n", 4);
}
